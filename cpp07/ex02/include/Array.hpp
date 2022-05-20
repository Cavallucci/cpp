#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		~Array<T>(void);
		Array<T>(Array<T> const & src);

		unsigned int	size() const;
		T				getArray();
		Array<T>		&operator=(Array const &rhs);
		T				&operator[](unsigned int n); 

		class OutOfRangeException : public std::exception
	{
		public:
			virtual const char *what() const throw(){
				return ("index is out of range");}
	};

	private:
		T				*_array;
		unsigned int	_n;
};

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
	if (_n != 0)
		delete[] _array;
}

template<typename T>
Array<T>::Array(Array<T> const & src)
{
	if (this->_n != 0)
		delete[] _array;
	T   *tmp = new T[src.size()];
	for (unsigned int i = 0; i < src.size(); i++)
		tmp[i] = src._array[i];
	this->_array = tmp;
	this->_n = src.size();
}

template<typename T>
Array<T>    &Array<T>::operator=(Array<T> const &rhs)
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
T   &Array<T>::operator[](unsigned int n)
{
	if (n >= _n)
		throw OutOfRangeException();
	return (this->_array[n]);
}

template<typename T>
unsigned int    Array<T>::size() const
{
	return (this->_n);
}

template<typename T>
T   Array<T>::getArray()
{
	return (this->_array);
}
#endif
