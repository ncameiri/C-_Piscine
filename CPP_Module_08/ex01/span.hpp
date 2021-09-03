#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <list>
#include <array>
#include <vector>
#include <deque>

class span
{
    private:
       std::vector<int> data;
       unsigned int N;
    public:
        span();
        span(unsigned int _N);
        span(span const& to_copy);
        ~span();
        span& operator=(span const& to_copy);

        void addNumber(int n);

        int shortestSpan();
		int longestSpan();
    class max_N_reached : public std::exception
    {
    	const char* what(void) const throw ();
    };
    class span_impossible : public std::exception
    {
    	const char* what(void) const throw ();
    };
};



#endif