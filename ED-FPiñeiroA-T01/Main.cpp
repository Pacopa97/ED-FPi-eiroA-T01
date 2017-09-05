#include <iostream>
#include "FetchClass.h"
#include "SortClass.h"
#include "BinClass.h"
#include "SecClass.h"

using namespace std;


void main() {
	/*SecClass prueba;
	int buffer;
	int size;
	cout << "Introduce el tamaño del arreglo" << endl;
	cin >> size;

	prueba.setArray(prueba.randArray(size));

	prueba.showArray();

	std::cin >> buffer;
	
	cin.get();
	*/

	BinClass binario;
	int busqueda;
	int size;
	int buffer;

	std::cout << "Introduce el tamaño del arreglo: ";
	std::cin >> size;
	binario.setArray(binario.randArray(size));
	binario.showArray();
	std::cout << "Introduzca el numero que desea buscar: ";
	std::cin >> busqueda;
	binario.showFetch(binario.bFetch(busqueda));
	binario.showArray();
	std::cin >> buffer;
}

/*
class fetchCLass {

public:
	void fetchClass();
	virtual void setArray(int a[]) = 0;
	virtual int* getArray() = 0;
	virtual void showArray() = 0;
	virtual void showFetch(int position) = 0;
	virtual void showArray(int a[]) = 0;  

protected:
	int myArray[];	
	int* randArray(int size);
};

class sortClass {
public:
	void selection(int a[]);
	void insertion(int a[]);
	void bubble(int a[]);
	void quickSort(int a[], int i, int f);
	void mergeSort(int a[], int b, int e);

};



class secClass {

public:
	secClass() {}
	int sFetch(int e);
	static int sFetch(int a[], int e);
};

class binClass {
	
public:
	binClass() {}
	int bFetch();
	static int bFetch(int a[], int e);

};
*/
