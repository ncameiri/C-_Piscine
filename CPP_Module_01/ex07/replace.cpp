#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//https://www.geeksforgeeks.org/stringstream-c-applications/
//https://github.com/aorji/42-CPP-pool/blob/master/d01/ex07/replace.cpp
int main(int argc, char *argv[]){

    if(argc == 4)
    {
        std::ifstream ifs(argv[1]);
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string repla = ".replace";
        std::string _fileout = argv[1] + repla; 
        if(!ifs)
        {
            std::cout<<"invalid file\n";
            return (0);
        }
        if (s1.empty() || s2.empty())
        {
            std::cout<<"you let one or two arguments empty\n";
        }

        std::string act_word;
        std::ofstream ofs(_fileout);
        //INVENCOES
        std::stringstream AUX2;
        AUX2<< ifs.rdbuf();
        
        act_word = AUX2.str();
        std::cout<<act_word[1];
        ofs<<act_word;
        /*while((ifs>>act_word))
        {
            if(act_word == s1)
                ofs<<s2;
            else
                ofs<<act_word;
        }*/
    }
    else 
        std::cout<<"invalid number of arguments\n";
    return (0);
}