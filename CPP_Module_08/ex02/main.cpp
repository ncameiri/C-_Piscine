#include "mutantstack.hpp"
void testes(){
    MutantStack<int> st1;
   
    st1.push(42);
    st1.push(3);
    std::cout << "top call : "<< st1.top()<<std::endl;
    std::cout << "size call : "<< st1.size()<<std::endl;

    MutantStack<int>::iterator  it = st1.begin();
    MutantStack<int>::iterator  ite = st1.end();
    std::cout<< "\n begin call : "<<*it<<
    "\n end call : "<<*(ite - 1)<<std::endl;
};

int main()
{
    //testes();
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack);
    return 0;
}