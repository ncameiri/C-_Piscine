#include <unistd.h>
#include <iostream>

int main(int argc, char **argv)
{
    int k,j;
    char pri;
    k=1;
    j=0;
    if (argc == 1)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while(k < argc)
    {
        j=0;
        while(argv[k][j])
        {
            pri = argv[k][j];
            if(pri >= 'a' && pri <='z')
                std::cout<< static_cast<char>(pri - 32);
            else
                std::cout<< static_cast<char> (pri);
            j++;
        }
        k++;
    }
    std::cout << std::endl;
    return 0;
    
}
