#include <iostream>
#define n 10
using namespace std;

int main(){
	int* pi;
    pi = new int{n};
    int x = 2, i = 0;

    if (pi == NULL)
    {
        cout << "erro memory" << endl;
    }
    else{
    for (i = 0 ; i < n; i++, x+=3)
    {
        pi[i] = x;
        cout << pi[i] << endl;
    }

    }
    
    delete pi;
}