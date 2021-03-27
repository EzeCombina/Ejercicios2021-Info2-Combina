#include <stdio.h>
#include <math.h>

int main()  {
	
	double monto;
	double principal = 1000.0;
	double tasa;
	int anio;
	
	for( tasa = .05; tasa < .1; tasa = tasa + .01) 
	{
		if(tasa == .07)
		{
			tasa = tasa + .01;
		}
		
		printf(" %4s %21s\n", "Anio", "Monto del deposito" );
		
		for( anio = 1; anio <= 10; anio++ ) 
		{
			monto = principal * pow( 1.0 + tasa, anio );
			
			printf(" %2d %15.2f\n", anio, monto );
		}
		
		printf("\nEl interes es del %.1f por ciento\n\n", (tasa*100.0));
		
	}
	
	return 0;
	
}
