#include <iostream>
using namespace std;
int CalcularDoble(int n);
int main ()
{
	int n1;
	cout<<"ingrese el primer numero: ";
	cin>>n1;
	cout<<"el doble es: "<<CalcularDoble(n1)<<endl;
	return 0;
}
int CalcularDoble(int n)
{
	int doble;
	doble=n*2;
	return doble;
}