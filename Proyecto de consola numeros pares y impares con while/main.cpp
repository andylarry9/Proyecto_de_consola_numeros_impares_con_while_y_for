#include <iostream>
using namespace std;
/* Analizar los distintos métodos (estructuras repetitivas) para implementar un algoritmo que muestre en pantalla 
los primeros N números naturales (iniciando en 1) e indique en cada caso si es par o impar. 
*/

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "spanish");
	cout << "\t Solución de numeros pares con incremento de 1 en 1: \n";
	int N = 1;
	while(N <= 100)
	{
		if (N % 2 == 0)//m pares
		{
			cout << N << endl;
		}		
		N++;
	}
       cout << endl << endl;
		

	
	

	

	
	system("pause");
	
	return 0;
}
