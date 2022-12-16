// cf1767b

#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

std::uint64_t solve()
{
    std::uint64_t tower_count;
    std::cin >> tower_count;

    // first tower
    std::uint64_t solution_tower_block_count;
    std::cin >> solution_tower_block_count;
    tower_count--;

    // remaining towers
    std::vector<std::uint64_t> tower_vector;
    while (tower_count--)
    {
        std::uint64_t tmp;
        std::cin >> tmp;
        tower_vector.push_back(tmp);
    }

    // solve
    std::sort(tower_vector.begin(), tower_vector.end());
    for (std::uint64_t i : tower_vector)
    {
        if (i > solution_tower_block_count)
        {
            int tmp = solution_tower_block_count + i;
            if (tmp % 2 == 0)
            {
                solution_tower_block_count = tmp / 2;
            }
            else
            {
                solution_tower_block_count = (tmp / 2) + 1;
            }
        }
    }

    return solution_tower_block_count;
}

int main()
{
    std::uint64_t t;
    std::cin >> t;
    while (t--)
    {
        std::cout << solve() << "\n";
    }
}
