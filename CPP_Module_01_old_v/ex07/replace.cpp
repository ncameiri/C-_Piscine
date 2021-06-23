#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

//http://ee.usc.edu/~redekopp/cs103/slides/Unit14_Streams.pdf
//https://www.geeksforgeeks.org/stringstream-c-applications/
//https://github.com/aorji/42-CPP-pool/blob/master/d01/ex07/replace.cpp

void write_file(std::string act_line_hold,std::ofstream& ofs, char *argv[],std::string act_line){

    std::stringstream AUX2(act_line_hold);
    std::string act_word;
    std::string act_word_hold;
    AUX2 >> act_word_hold;
    while(1)
    {   
        if(act_word_hold == argv[2])
            act_word_hold = argv [3];
        if(AUX2>>act_word)
        {
            ofs<<act_word_hold<<" ";
            act_word_hold = act_word;
        }
        else
        {
            ofs<<act_word_hold;
            break;
        }
    }
}
//Chamar os file descriptor por referencia para nao invocar o constructor
void in_parse(std::string act_line_hold, std::ifstream& ifs, std::ofstream& ofs,char *argv[])
{   
    std::string act_line;       
    while(1){
    if(getline(ifs, act_line))
    {
        write_file(act_line_hold,ofs,argv,act_line);
        act_line_hold = act_line;
        ofs<<"\n";
    }
    else
    {   
        write_file(act_line_hold,ofs,argv,act_line);
        break;
    }
    }  
}

int main(int argc, char *argv[]){

    if(argc != 4)
    {
        std::cout<<"invalid number of arguments\n";
        return -1;
    }
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
   
    std::string act_line_hold;
    std::ofstream ofs(_fileout);
    getline(ifs, act_line_hold);
    if (!act_line_hold.empty())
        in_parse(act_line_hold, ifs,ofs,argv);
    return (0);
}