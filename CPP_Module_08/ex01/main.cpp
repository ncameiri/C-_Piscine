#include "span.hpp"
int main(){
    span el1(2);
    
       try{
    el1.shortestSpan();
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    el1.addNumber(1);
    el1.addNumber(1);
    
    
    try{
    el1.addNumber(1);
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

       try{
    el1.shortestSpan();
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

}