// cf1774a

#include <iostream>
#include <string>

std::string solve()
{
    std::string solution = "";

    int length_of_a;
    std::cin >> length_of_a;

    std::string str;
    std::cin >> str;

    int cur_pos = 0;

    char carry;
    carry = str[0];
    ++cur_pos;

    while (cur_pos != length_of_a)
    {
        if (carry == '0')
        {
            solution += '+';
            if (str[cur_pos] == '0')
            {
                carry = '0';
            }
            else // str[cur_pos] == 1
            {
                carry = '1';
            }
        }
        else // carry == 1
        {
            if (str[cur_pos] == '0')
            {
                solution += '+';
            }
            else // str[cur_pos] == 1
            {
                solution += "-";
                carry = '0';    
            }
        }
        
        ++cur_pos;
    }

    return solution;
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
