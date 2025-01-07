#ifndef SIMPLEVECTOR_H_
#define ine SIMPLEVECTOR_H_

template<typename T>
class SimpleVector
{
public:
	SimpleVector();
	SimpleVector(int capacity);
	~SimpleVector();
	void push_back(const T& value);
	T getValue(int idx);
	void pop_back();
	int size();
	int capacity();

private:
	T* data;
	int idx;
	int currentSize;
};

#endif