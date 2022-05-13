// cf1680a.cpp

#include <iostream>
#include <algorithm>

int solve()
{
    int l1, r1, l2, r2;
    std::cin >> l1 >> r1 >> l2 >> r2;
    if (l1 >= l2 && l1 <= r2)
    {
        return l1;
    }
    if (l2 >= l1 && l2 <= r1)
    {
        return l2;
    }
    return l1 + l2;
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
