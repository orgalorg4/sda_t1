#pragma once

struct Element
{
	int data;
	Element *leg;
};
void insertFront(int val, Element *&cap);
void afisare(Element *cap);
void insertIner(int pos, int val, Element *&cap);
void stergere(int pos, Element *&cap);