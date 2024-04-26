#include <iostream>
using namespace std;

struct no {
	int info;
	no *link;
};

void puts_last(no *L){
	no *P;
	P = L;
	
	if (L == NULL)
	{
		cout << endl << "não existe lista" << endl;
	}
	
	while (P->link != NULL)
	{
		P = P->link;
	}
	
	cout << endl << "o ultimo item é: " << P->info << endl;
	
}