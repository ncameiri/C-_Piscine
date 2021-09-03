#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template<class T> 
class MutantStack : public std::stack<T>
{
    public:

        MutantStack(){};
        MutantStack(MutantStack <T> const &to_copy){*this = to_copy;};
        MutantStack <T> &operator= (MutantStack<T> const& to_copy){*this = to_copy; return *this;};
        ~MutantStack<T>(){};

        typedef typename std::stack<T>::container_type::iterator iterator;
        
        iterator begin();
        iterator end();

};

#endif