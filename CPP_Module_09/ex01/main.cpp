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
    while (!ss.eof())
    {
        std::string temp;
        ss >> temp;
        if (temp.find_first_not_of("0123456789") == std::string::npos)
        {
            //std::cout << "e numer" << std::endl;
            numbs.push(temp.c_str()[0] - 48);
        }
        if (temp.find_first_not_of("+-/*") == std::string::npos)
        {
            //std::cout << "e opera" << std::endl;
            int temp_num2 = numbs.top();
            numbs.pop();
            if (numbs.empty())
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            int temp_num1 = numbs.top();
            numbs.pop();
            
            switch(temp.c_str()[0]){
                case '+':
                    numbs.push(temp_num1 + temp_num2);
                    break;
                case '-':
                    numbs.push(temp_num1 - temp_num2);
                    break;
                 case '/':
                    numbs.push(temp_num1 / temp_num2);
                    break;
                case '*':
                    numbs.push(temp_num1 * temp_num2);
                    break;
                
            }
        }

        std::cout << temp << std::endl;
    }
    std::cout<< numbs.top();
    return 0;
}