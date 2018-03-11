#include <iostream>
#include "Header.h"

void insertFront(int val, Element *&cap)
{
	Element *p;
	p = new Element;
	p->data = val;
	p->leg = cap;
	cap = p;
}
void afisare(Element *cap)
{
	while (cap)
	{
		std::cout << cap->data << " ";
		cap = cap->leg;
	}
	std::cout << std::endl;
}
void insertIner(int pos, int val, Element *&cap)
{
	Element *q,*p;
	q= new Element;
	q = cap;
	p = new Element;
	p->data = val;
	while (pos-1)
	{
		pos--;
		q = q->leg;
	}
	p->leg = q->leg;
	q->leg = p;

}
void stergere(int pos, Element *&cap)
{
	Element *p, *q;
	p = new Element;
	q = new Element;
	q = cap;
	if (pos == 0)
	{
		p = cap;
		cap = cap->leg;
		delete p;
	}
	else
	{
		while (pos - 1)
		{
			pos--;
			q = q->leg;
		}
		p = q->leg;
		q->leg = p->leg;
		delete p;
	}
}