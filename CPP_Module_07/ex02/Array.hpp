#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <string>
#include <cstdlib>

template<typename T = int>class Array
{
    private:
        T *data;
        int length;
    public:
        Array(){
                  
            data = NULL;
            length = 0;
        };
        Array(unsigned int elems){
    
            if(elems <= 0)
             { 
                   data = NULL;
                   return;
             }
             
            data = new T[elems];
            length = elems;
            
            for(int i=0;i < elems;i++)
                data[i]=0;
       };

        Array(Array const &to_copy) {
			
            length = 0;           
			data = NULL;
			*this = to_copy;
		}

       Array& operator= (Array const &to_copy)
       {
            delete[] data;//to avoid Leaks
            length = to_copy.length;
		    data = new T[length];
			for (int i = 0; i < length; ++i)
				data[i] = to_copy[i]; 
            return *this;
       };
       ~Array()
       {
           if(length > 0 && data)
            delete[] data;
       };

		T& operator[](int i) {
			if (i < 0 || i >= length)
				throw std::exception();
            else
                return data[i];
		}

		T operator[](int i) const{
			if (i < 0 || i >= length) {
				throw std::exception();
			} else {
				return data[i];
			}
		}

        int size() const {
			return length;
		}

};



#endif