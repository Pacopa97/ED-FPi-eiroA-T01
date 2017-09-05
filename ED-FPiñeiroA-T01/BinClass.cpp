#include <iostream>
#include "BinClass.h"
#include "SortClass.h"


BinClass::BinClass() {

}

int BinClass::bFetch(int e) {
	return bFetch(myArray, e);
}

int BinClass::bFetch(int* &a, int e) {
	BinClass temp;
	int choice;
	bool men = true;
	while (men != false) {
		std::cout << " Seleccione el metodo de ordenamiento: ";
		std::cout << " 1.- Seleccion \n";
		std::cout << " 2.- Insercion \n";
		std::cout << " 3.- Burbuja\n";
		std::cout << " 4.- Quicksort.\n";
		std::cout << " 5.- Mergesort.\n";
		

		std::cin >> choice;

		switch (choice) {
		case 1:
			temp.selection(a);
			break;
		case 2:
			temp.insertion(a);
			break;
		case 3:
			temp.bubble(a);
			break;
		case 4:
			temp.quickSort(a, 0,sizeof(a));
			break;
		case 5:
			temp.mergeSort(a,0,sizeof(a));
			break;
		default:
			std::cout << " Seleccione una opcion valida \n";
			std::cin >> choice;
			break;
		}

		int center, start, end;
		start = 0;
		end = sizeof(a) - 1;

		while (start <= end) { 
			center = (start + end) / 2; 

			if (a[center] == e) { 
				return center; 

			} if (e < a[center]) { 
				end = center - 1; 
			}else {
				start = center + 1; 
			}
		}
		return -1; 
	}
}