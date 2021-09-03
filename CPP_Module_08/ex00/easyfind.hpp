#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>


#include <list>
#include <array>
#include <vector>
#include <deque>


template<typename T>
void easyfind(T &data, int find){

    typedef typename T::iterator ite; 

    ite pos = std::find(data.begin(), data.end(), find);
    int i=std::distance(data.begin(),pos);
    if(pos == data.end()){
        throw std::exception();}
    else
       { std::cout<<"find on pos: "<<i + 1<<std::endl;}
}

#endif