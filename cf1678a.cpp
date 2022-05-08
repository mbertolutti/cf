// cf1678a

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

int solve()
{
    std::vector<int> vec;
    vec.clear();
    std::unordered_set<int> us;
    int vec_size;
    std::cin >> vec_size;
    bool found_pair = false;
    for (size_t i = 0; i < vec_size; ++i)
    {
        int n;
        std::cin >> n;
        vec.push_back(n);
        size_t tmp = us.size();
        us.insert(n);
        if (us.size() == tmp)
        {
            found_pair = true;
        }
    }
    std::sort(vec.begin(), vec.end());

    int j = 0;
    while (vec[j] == 0 && j < vec_size)
    {
        ++j;
    }
    if (j > 0)
    {
        return vec_size - j;
    }
    if (found_pair)
    {
        return vec_size;
    }
    return vec_size + 1;
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
