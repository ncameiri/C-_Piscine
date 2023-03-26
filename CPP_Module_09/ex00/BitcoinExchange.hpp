
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

class BitcoinExchange {
private: 
public:
    void bitcoinexchange(void);
    void bitcoinexchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange(void);
};

#endif