#ifndef ARRAY_HPP
# define ARRAY_HPP
//https://www.tutorialspoint.com/cplusplus/cpp_templates.htm
template<typename T>class Array
{
    private:
        T *data;
        int length;
    public:
        Array();
        ~Array();
};



#endif