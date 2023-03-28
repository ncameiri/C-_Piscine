#ifndef PMERGEME_HPP
# define PMERGEME_HPP

class PmergeMe {
private: 
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe(void);
};

#endif