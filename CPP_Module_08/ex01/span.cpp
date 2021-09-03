#include "span.hpp"

Span::Span()
{
    N=0;
}

Span::Span(unsigned int _N)
{
    N=_N;
}

Span::Span(Span const& to_copy) {
	*this = to_copy;
}

Span::~Span()
{
}
Span& Span::operator=(Span const& to_copy) {
	N = to_copy.N;
	data = to_copy.data;
	return *this;
}

void Span::addNumber(int n){
    if(data.size() == N)
        throw max_N_reached();
    else
        data.push_back(n);
}

int Span::shortestSpan(){
    if(data.size()<= 1)
        throw Span_impossible();
    
    std::vector <int> aux = data;
    std::vector <int>::iterator ite;

    std::sort(aux.begin(), aux.end());
    int span = INT_MAX;
    for(ite = aux.begin(); ite <  (aux.end() - 1); ++ite)
    {        
        if((*(ite + 1)) - *ite  < span)
            span = *(ite + 1) - *ite;
    }
    return (span);    
}

int Span::longestSpan(){
    if(data.size()<= 1)
       throw Span_impossible();
    
    std::vector <int> aux = data;
    
    std::sort(aux.begin(), aux.end());
    int longest = *(aux.end() - 1) - *aux.begin() ;
    if(longest < 0)
        longest = longest * -1;
    return (longest);
}

const char* Span::max_N_reached::what() const throw () {
	return "Limit of numbers reached";
}

const char* Span::Span_impossible::what() const throw () {
	return "Impossible to get a Span";
}
