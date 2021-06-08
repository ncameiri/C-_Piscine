#include "phonebook.hpp"

int main(){

phonebook list[8];
std::string OPTN;
std::string OPTN2;
int no_of_contacts = -1;
int index_list=0;

std::cout<<"choose an option ADD/SEARCH/EXIT"<<std::endl;

while (std::getline(std::cin,OPTN) && OPTN !="EXIT")
{
    if (OPTN == "ADD")
    {        
        if(no_of_contacts > 6)
        {
             std::cout<<"LIST IS FULL - ENTER TO MENU"<<std::endl;
        }
        else
        {
            no_of_contacts++;    
            list[no_of_contacts].new_contact(no_of_contacts);
        }
    }
    else if (OPTN == "SEARCH")
    {
        index_list = -1;
        if (no_of_contacts <0)
        continue;
        std::cout << "|     index|first name| last name|  nickname|" << std::endl;
        while(++index_list <= no_of_contacts)
        {
            list[index_list].search_show();
            std::cout<<std::endl;
        }
            index_list=-1;
            std::cout<<"INPUT INDEX TO SEE DETAILS: ";
            std::cin>>OPTN2;
            
            if(isalpha(OPTN2[0]))
            {   
                std::cout<<"WRONG INPUT"<<std::endl;
                continue;
            }
            else
                index_list=atoi(OPTN2.c_str());
            std::cout<<std::endl;
            if (index_list >= 0 && index_list <= no_of_contacts)
                list[index_list].show_contact();
            else
                std::cout<<"OUT OF RANGE"<<std::endl;
            std::cin.ignore(1,'\n');
    }
    else
    {
         std::cout<<"COMMAND NOT RECOGNIZED"<<std::endl;
         std::cout<<"choose an option ADD/SEARCH/EXIT"<<std::endl;
         continue;
    }

    
 std::cout<<"choose an option ADD/SEARCH/EXIT"<<std::endl;
    }
 return 0;
}