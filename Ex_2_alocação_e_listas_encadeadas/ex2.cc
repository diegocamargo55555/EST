#include <iostream>
using namespace std;

struct no
{
	int info;
	no *link;
};

int main(){
	
	no *i, *a, *p; 
	
	int soma = 0, count = 0;
	
	a = new no;
	i = a;
	a->info = 5;
	a->link=NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 15;
	a->link = NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 18;
	a->link = NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 27;
	a->link = NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 57;
	a->link = NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 8;
	a->link = NULL;
	p = a;
	
	a = new no;
	p -> link = a;
	a->info = 80;
	a->link = NULL;
	
	p=i;
	
	while (p != NULL)
	{
		cout << p->info << " ";
		soma += p->info;
		count++;
		p = p->link;
	}
	
	cout << endl << soma / count << endl;
}