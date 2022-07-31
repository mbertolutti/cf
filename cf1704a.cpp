// cf1704a

#include <iostream>
#include <string>

bool solve()
{
    int a_length = 0;
    int b_length = 0;
    std::cin >> a_length;
    std::cin >> b_length;
    --a_length;
    --b_length;
    std::string a;
    std::string b;
    std::cin >> a;
    std::cin >> b;
    while (a_length != b_length)
    {
        if (a[0] == b[0])
        {
            a[1] = a[0];
        }
        a = &a[1];
        --a_length;
    }
    return (a == b) ? true : false;
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
