#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <list>
#include <array>
#include <vector>
#include <deque>


class Span
{
    private:
       std::vector<int> data;
       unsigned int N;
    public:
        Span();
        Span(unsigned int _N);
        Span(Span const& to_copy);
        ~Span();
        Span& operator=(Span const& to_copy);

        void addNumber(int n);

        int shortestSpan();
		int longestSpan();
    class max_N_reached : public std::exception
    {
    	const char* what(void) const throw ();
    };
    class Span_impossible : public std::exception
    {
    	const char* what(void) const throw ();
    };
};



#endif