// cf1758a

#include <cstddef>
#include <iostream>
#include <string>

std::string solve()
{
    std::string s;
    std::cin >> s;
    std::size_t len = s.length();
    bool even = (len % 2);
    if (len == 1)
    {
        return s + s;
    }
    int pos_i = len - 1;
    if (!even)
    {
        s += s[pos_i];
        --pos_i;
    }
    while (pos_i >= 0)
    {
        s += s[pos_i];
        --pos_i;
    }
    return s;
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
