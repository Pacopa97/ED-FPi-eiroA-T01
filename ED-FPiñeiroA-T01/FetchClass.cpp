#include <iostream>
#include "FetchClass.h"
#include <time.h>
#include <string>
#include <stdio.h>

using namespace std;

FetchClass::FetchClass() {

}


void FetchClass::setArray(int a[]) {
	myArray = a;
}

int* FetchClass::getArray() {
	return myArray;
}

void FetchClass::showArray() {
	showArray(myArray);
}

void FetchClass::showFetch(int position) {
	if (position >= 0) {

		std::cout << "La posicion es: " << position << endl;
	}
	else {
		std::cout << "No existe en el arreglo" << endl;
	}
}

void FetchClass::showArray(int* &a) {
	
	for (int i = 0; i < sizeof(a); i++) {
		cout << " [" << i << "] " << a[i];
	}

}

int* FetchClass::randArray(int size) {
	srand(time(NULL));
	int* myArray = new int[size];
	for (int i = 0; i < size; i++) {
		myArray[i] = rand() % 100;
	}
	return myArray;
}
