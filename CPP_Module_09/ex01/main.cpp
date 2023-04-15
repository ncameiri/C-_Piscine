#include <stack>
#include <iostream>
#include <sstream>
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::string numbs_string = argv[1];
    if (numbs_string.find_first_not_of(" 0123456789+-*/") != std::string::npos)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::stack<int> numbs;
    std::stack<char> op;
    std::stringstream ss;
    ss << numbs_string;
    int num_digits = 0, num_op = 0;
    while (!ss.eof())
    {
        std::string temp;
        ss >> temp;
        if (temp.size() > 1)
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        else if (temp.find_first_not_of("0123456789") == std::string::npos && temp != "\0")
        {
            num_digits++;
            numbs.push(temp.c_str()[0] - 48);
        }
        else if (temp.find_first_not_of("+-/*") == std::string::npos && temp != "\0")
        {
            num_op++;
            if (numbs.size() <= 1)
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            int temp_num1 = numbs.top();
            if (numbs.size() > 1)
                numbs.pop();
            else
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            int temp_num2 = numbs.top();
            if (numbs.size() >= 1)
                numbs.pop();
            switch (temp.c_str()[0])
            {
            case '+':
                numbs.push(temp_num1 + temp_num2);
                break;
            case '-':
                numbs.push(temp_num2 - temp_num1);
                break;
            case '/':
                numbs.push(temp_num2 / temp_num1);
                break;
            case '*':
                numbs.push(temp_num1 * temp_num2);
                break;
            }
        }
        else
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    }
    if (numbs.empty() || num_digits != num_op + 1)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << numbs.top() << std::endl;
    return 0;
}
