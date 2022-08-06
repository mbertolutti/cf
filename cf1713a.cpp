// cf1713a

#include <iostream>
#include <cstdlib>
using namespace std;

int solve()
{
    int box_count;
    cin >> box_count;

    int min_x = 0;
    int max_x = 0;
    int min_y = 0;
    int max_y = 0;

    while (box_count--)
    {
        int x;
        int y;
        cin >> x;
        cin >> y;

        if (x < min_x)
        {
            min_x = x;
        }
        else if (x > max_x)
        {
            max_x = x;
        }

        if (y < min_y)
        {
            min_y = y;
        }
        else if (y > max_y)
        {
            max_y = y;
        }
    }
    
    int moves = 0;
    if (min_x < 0)
    {
        moves += 2 * abs(min_x);
    }
    if (max_x > 0)
    {
        moves += 2 * max_x;
    }
    if (min_y < 0)
    {
        moves += 2 * abs(min_y);
    }
    if (max_y > 0)
    {
        moves += 2 * max_y;
    }

    return moves;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        std::cout << solve() << "\n";
    }
}
