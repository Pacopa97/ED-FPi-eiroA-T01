#pragma once
#include <iostream>

using namespace std;

class FetchClass{

public:
	FetchClass();
	virtual void setArray(int a[]);
	virtual int* getArray();
	virtual void showArray();
	virtual void showFetch(int position);
	virtual void showArray(int* &a);
	int* randArray(int size);

protected:

	int* myArray;
	
};