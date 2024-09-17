#include <iostream>
using namespace std;
/* 
Analizar los distintos métodos (estructuras repetitivas) para implementar un algoritmo que muestre en pantalla 
los primeros N números naturales (iniciando en 1) e indique en cada caso si es par o impar. 
*/

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "spanish");
	
cout << "Secuencia de numeros pares del 1 al 100 con incremento de 2 en 2: \n ";
for (int N = 1; N <= 100; N++)
{
	if (N % 2 == 0)
	{
		cout << N << endl;
	}
}
cout << endl << endl;

cout << "Secuencia de numeros impares del 1 al 100 con incremento de 2 en 2: \n ";
for (int N = 1; N <= 100; N++)
{
	if (N % 2 != 0)
	{
		cout << N << endl;
	}
}
cout << endl << endl;

system ("pause");
	
	return 0;
}
