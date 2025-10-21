#include "Iter.hpp"
#include <iostream>

void changeChar(char &c)
{
	if (c == 'a')
		c = 'g';
}

template <typename T>
void printArr(const T &el)
{
		std::cout << el << std::endl;
}

int main(void)
{
	int intArr[5] = {1, 2, 3, 4, 5};
	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	float fArr[3] = {1.1, 1.2, 1.3};
	double dArr[3] = {1.1, 1.2, 1.3};
	int *dIntArr = new int[10];
	iter(intArr, 5, printArr<int>);
	iter (charArr, 5, printArr<char>);
	iter(charArr, 5, changeChar);
	iter (charArr, 5, printArr<char>);
	iter(fArr, 3, printArr<float>);
	iter(dArr, 3, printArr<double>);
	iter(dIntArr, 10, printArr<int>);
	delete[] dIntArr;
}