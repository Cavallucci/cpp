#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	_array = 0;
	_n = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n])
{
	_n = n;
	std::cout << "Constructor Array" << std::endl;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}
 
template<typename T>
Array<T>::Array(Array<T> const & src)
{
	if (this->_n != 0)
		delete[] _array;
	T	tmp = new T[src.size()];
	for (int i = 0; i < src.size(); i++)
		tmp[i] = src._array[i];
	this->_array = tmp;
	this->_n = src.size();
	return (*this);
}
 
template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
    if (this->_n != 0)                                                           
        delete[] _array;                                                         
    T   tmp = new T[rhs.size()];                                                 
    for (int i = 0; i < rhs.size(); i++)                                         
        tmp[i] = rhs._array[i];                                                  
    this->_array = tmp;                                                          
    this->_n = rhs.size();
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n)
{

	return (*this);
}

template<typename T>
unsigned int	Array<T>::size()
{
	return (this->_n);
}

template<typename T>
T	Array<T>::size()
{
	return (this->_array);
}
