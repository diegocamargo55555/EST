struct no {
	int info;
	no *link;
};

no *inicializaLista(no *L) {
	return NULL;
}

void imprimeLista(no *L) {
	no *P;
	P = L;	
	
	cout << "\n Imprime Itens da lista: \n";	
	while(P != NULL) {
		cout << P->info << " ";	
		P = P->link;
	}	
}

void puts2(no *L)
{
	no *P;
	P = L;
	
	if (L == NULL)
	{
		cout << endl << "não existe lista" << endl;
	}
	else{
		P = P->link;
		if (P != NULL)
		{
			cout << P->info << " ";	
			
		}
		else{
			cout << endl << "não existe segundo item" << endl;
		}
	}
}

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


no *insereInicioLE(no *L, int x) {
	no *N;

	N = new no;
	N->info = x;

    N->link = L;
	
	L = N;
	return (L);
}

no *removeInicioLE(no *L, int *n) {
	no *AUX;

	if (L != NULL) {
		*n = L->info;
		AUX = L;
		L = L->link;
		delete AUX;
	}
	else{
		*n = 0;
	}
	return (L);
}

