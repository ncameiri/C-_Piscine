#include "span.hpp"
int main(){
    
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span el1(6);
    
       try{
    el1.shortestSpan();
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    el1.addNumber(3);
    el1.addNumber(4);
    
    
    try{
    el1.addNumber(5);
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
    el1.addNumber(50);
    el1.addNumber(60);
    el1.addNumber(60);
       try{
     std::cout<<"MAIN :"<<el1.shortestSpan();
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

}