#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	tmp;

	tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data	*deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
