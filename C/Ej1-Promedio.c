#include <stdio.h>

int main()  {
	
	int i, a;
	float Numeros[50], Suma=0, Prom=0;
	
	printf("Ingrese los numeros de los cuales obtendremos el promedio: \n");
	printf("Para finalizar escribir: 9999\n");
	
	for ( i = 0;; i++)
	{
		printf("\n");
		scanf("%f", &Numeros[i]);

		if(Numeros[i]==9999)
		{
			break;
		}
	}
	
	a=i-1;
	
	for ( i = 0; i <= a; i++) 
	{
		Suma= Suma + Numeros[i]; 
	}

	a++;
	
	Prom=Suma/a;
	
	printf("\nEl valor del promedio es: %.3f", Prom);
	
	return 0;
	
}
