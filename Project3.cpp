#include "simplenector.h"
#include <iostream>

using namespace std;

int main()
{
	SimpleVector<int> vec;

	cout << vec.capacity() << endl;
	vec.push_back(4);
	cout << vec.size() << endl;
	vec.push_back(5);
	vec.push_back(6);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	vec.pop_back();
	cout << vec.getValue(1) << endl;
}