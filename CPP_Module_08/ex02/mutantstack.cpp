 
 #include "mutantstack.hpp"

template<class T> 
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return std::stack<T>::c.begin();
};

template<class T> 
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return std::stack<T>::c.end();
};

//to recognize MutantStack <int>
template class MutantStack<int>;
