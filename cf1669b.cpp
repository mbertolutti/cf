// cf1669b

#include <iostream>
#include <unordered_map>
#include <iterator>
#include <utility>
#include <limits>

int solve()
{
    int numbers;
    std::cin >> numbers;

    std::unordered_map<int, int> occurances;
    while (numbers--)
    {
        int curr;
        std::cin >> curr;
        
        ++occurances[curr];
        if (occurances[curr] == 3)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return curr;
        }
    }
    return -1;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::cout << solve() << "\n";
    }
}
