
#include <cstddef>

template <typename T, typename Func> void iter(T *arr, const size_t lenght, Func func)
{
	for (size_t i = 0; i < lenght; i++)
		func(arr[i]);
}