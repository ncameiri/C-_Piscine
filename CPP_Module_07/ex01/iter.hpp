#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void iter(T *data_arr,int length, void (*f)(T&)){
    int i = -1;
    if(!data_arr)
        return;
    while(++i<length)
        f(data_arr[i]);
}

#endif