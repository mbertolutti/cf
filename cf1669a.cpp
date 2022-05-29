// cf1669.cpp

#include <iostream>
#include <string>

/*
d1: 1900 <= rating.
d2: 1600 <= rating < 1900.
d3: 1400 <= rating < 1600.
d4: rating < 1400.
*/

const std::string d1 = "Division 1";
const std::string d2 = "Division 2";
const std::string d3 = "Division 3";
const std::string d4 = "Division 4";

std::string solve()
{
    int rating;
    std::cin >> rating; // input: -5000 <= rating <= 5000.
    if (rating >= 1900)
    {
        return d1;
    }
    else if (rating < 1400)
    {
        return d4;
    }
    else if (rating >= 1600) // && rating < 1900.
    {
        return d2;
    }
    else // 1400 <= rating < 1600.
    {
        return d3;
    }
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
