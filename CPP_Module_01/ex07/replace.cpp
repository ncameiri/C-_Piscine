#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]){

    if(argc == 4)
    {
        std::ifstream ifs(argv[1]);
        if(!ifs)
        {
            std::cout<<"invalid file\n";
            return (0);
        }
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty() || s2.empty())
        {
            std::cout<<"you let one or two arguments empty\n";
        }
        std::string aux = ".replace";
        std::string _fileout = argv[1] + aux; 
        std::string act_word;
        std::ofstream ofs(_fileout);
        while((ifs>>act_word))
        {
            ofs<<s2; 

        }
    }
    else 
        std::cout<<"invalid number of arguments\n";
return (0);
}