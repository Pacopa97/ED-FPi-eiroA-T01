#pragma once
#include <iostream>
#include "FetchClass.h"

using namespace std;


class SecClass : public FetchClass{

public:
	SecClass();
	int sFetch(int e);
	static int sFetch(int* &a, int e);
};