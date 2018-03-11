#include "Header.h"

int main()
{
	Element *cap;
	cap = 0;
	for (int i = 0;i < 10;i++)
		insertFront(i, cap);
	afisare(cap);

	insertIner(3, 20, cap);
	afisare(cap);
	
	stergere(3, cap);
	afisare(cap);

	return 0;
}