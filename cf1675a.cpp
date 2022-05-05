// cf1675a

#include <iostream>
#include <vector>

bool solve(std::vector<int>& vec)
{
    int cat_food = vec[0];
    int dog_food = vec[1];
    int universal_food = vec[2];
    int cat_count = vec[3];
    int dog_count = vec[4];

    int universal_food_need = 0;
    if (cat_count - cat_food > 0)
    {
        universal_food_need += cat_count - cat_food;
    }
    if (dog_count - dog_food > 0)
    {
        universal_food_need += dog_count - dog_food;
    }

    if (universal_food_need - universal_food > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int testcases;
    std::cin >> testcases;
    while (testcases--)
    {
        std::vector<int> vec {};
        vec.clear();
        for (size_t i = 0; i < 5; ++i)
        {
            int val = 0;
            std::cin >> val;
            vec.push_back(val);
        }
        std:: cout << (solve(vec) ? "YES" : "NO") << "\n";
    }
}
