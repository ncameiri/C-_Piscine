#include "span.hpp"

span::span()
{
    N=0;
}

span::span(unsigned int _N)
{
    N=_N;
}

span::span(span const& to_copy) {
	*this = to_copy;
}

span::~span()
{
}
span& span::operator=(span const& to_copy) {
	N = to_copy.N;
	data = to_copy.data;
	return *this;
}

void span::addNumber(int n){
    if(data.size() == N)
        throw max_N_reached();
    else
        data.push_back(n);
}

int span::shortestSpan(){
    if(data.size()<= 1)
        throw span_impossible();
}

int span::longestSpan(){
    if(data.size()<= 1)
       throw span_impossible();
}

const char* span::max_N_reached::what() const throw () {
	return "Limit of numbers reached";
}

const char* span::span_impossible::what() const throw () {
	return "Impossible to get a span";
}
