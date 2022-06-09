#include <iostream>
 
using namespace std;
 
int main() {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int aux = 0;
    int n4 = 0;
 
    cout << "Inserte cuatro numeros enteros:\na = ";
    cin >> n1;
    cout << "b = ";
    cin >> n2;
    cout << "c = ";
    cin >> n3;
    cout << "d = ";
    cin >> n4;
 
    if (n1 < n2) 
	{
        aux = n2;
        n2 = n1;
        n1 = aux;
    }
 
    if (n1 < n3) 
	{
        aux = n3;
        n3 = n1 ;
        n1 = aux;
    }
 
    if (n2 < n3)
	{
        aux = n3;
        n3 = n2 ;
        n2 = aux;
    }
    if (n1 < n4) 
	{
        aux = n4;
        n4 = n1;
        n1 = aux;
    }
    if (n2 < n4) 
	{
    	aux = n4;
    	n4 = n2;
    	n2 = aux;
    }
    if (n3 <n4) {
        aux = n4;
        n4 = n3;
        n3 = aux;
    }
    cout <<n1<<endl;
    cout <<n2<<endl;
    cout <<n3<<endl;
    cout <<n4<<endl;
 
    return 0;
}
