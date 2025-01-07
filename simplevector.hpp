#include "simplenector.h"
#include <iostream>

template<typename T>
SimpleVector<T>::SimpleVector()
{
	idx = 0;
	currentSize = 10;
	data = new T[currentSize];
}

template<typename T>
SimpleVector<T>::SimpleVector(int capacity)
{
	idx = 0;
	currentSize = capacity;
	data = new T[currentSize];
}

template<typename T>
SimpleVector<T>::~SimpleVector()
{
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (idx == currentSize)
		return;
	
	data[idx] = value;
		idx = idx + 1;
}

template<typename T>
void SimpleVector<T>::pop_back()
{
	if (idx == 0)
		return;

	idx = idx - 1;
}

template<typename T>
int SimpleVector<T>::size()
{
	return idx;
}

template<typename T>
int SimpleVector<T>::capacity()
{
	return currentSize;
}

template<typename T>
T SimpleVector<T>::getValue(int idx)
{
	return data[idx];
}