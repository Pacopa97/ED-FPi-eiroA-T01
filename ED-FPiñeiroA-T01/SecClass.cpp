#include <iostream>
#include "SecClass.h"

using namespace std;

SecClass::SecClass() {

}

int SecClass::sFetch(int e) {
	return sFetch(myArray, e);
}

int SecClass::sFetch(int* &a, int e) {
	for (int i = 0; i<sizeof(a); i++) {
		if (a[i] == e) {
			return i;
		}
	}
	return -1;
}
