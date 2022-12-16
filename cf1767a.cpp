// cf1767a

#include <iostream>
#include <string>
#include <utility>
#include <set>

bool solve()
{
    std::string s;
    std::getline(std::cin, s);
    int x;
    int y;

    std::pair<int, int> A;
    std::cin >> x;
    std::cin >> y;
    A.first = x;
    A.second = y;

    std::pair<int, int> B;
    std::cin >> x;
    std::cin >> y;
    B.first = x;
    B.second = y;

    std::pair<int, int> C;
    std::cin >> x;
    std::cin >> y;
    C.first = x;
    C.second = y;

    std::set<int> horizontal;
    horizontal.insert(A.first);
    horizontal.insert(B.first);
    horizontal.insert(C.first);
    if (horizontal.size() == 3)
    {
        return true;
    }

    std::set<int> vertical;
    vertical.insert(A.second);
    vertical.insert(B.second);
    vertical.insert(C.second);
    if (vertical.size() == 3)
    {
        return true;
    }

    return false;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::cout << (solve() ? "YES" : "NO") << "\n";
    }
}
