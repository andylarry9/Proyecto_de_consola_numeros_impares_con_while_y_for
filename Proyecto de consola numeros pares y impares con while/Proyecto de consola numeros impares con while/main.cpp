#include <iostream>
using namespace std;
/* Analizar los distintos m�todos (estructuras repetitivas) para implementar un algoritmo que muestre en pantalla 
los primeros N n�meros naturales (iniciando en 1) e indique en cada caso si es par o impar. 
*/

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "spanish");
	cout << "\t Soluci�n de numeros impares con incremento de 1 en 1: \n";
	int N = 1;
	while(N <= 100)
	{
		if (N % 2 != 0)//m impares
		{
			cout << N << endl;
		}		
		N++;
	}
	
	system("pause");

	
	
	
	
	
	
	
	
	return 0;
}
