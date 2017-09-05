#pragma once
#include <iostream>

using namespace std;

class SortClass {

public:
	void intercambio(int* &a, int i, int j);
	void selection(int* &a);
	void insertion(int* &a);
	void bubble(int* &a);
	void quickSort(int* &a, int i, int f);
	void mergeSort(int* &a, int b, int e);
	void merge(int* &a, int b, int c, int medio);

};