#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main ()
{
	int opcion;
	float a,b,c;
		printf ( " Ingresa el primer n�mero: " );
		scanf ( " % f " , & a);
		printf ( " Ingresa el segundo n�mero: " );
		scanf ( " % f " , & b);
			
	printf ( " Elige una opci�n: \n " );
	printf ( " \t 1.- Suma: \n " );
	printf ( " \t 2.- Resta: \n " );
	printf ( " \t 3.- Divisi�n: \n " );
	printf ( " \t 4.- Multiplicaci�n: \n " );
	printf ( " \t 5.- Potencia: \n " );
	printf ( " \t 6.- Ra�z cuadrada: \n " );
	printf ( " \t 7.- Salir: \n " );
	scanf ( " % d " , & opcion);
	switch (opcion)
	{
		
	case  1 :
		c = a + b;
		printf ( " La suma es: % 0.3f " , c);
		break ;
	case  2 :
		c = a - b;
		printf ( " La resta es: % 0.3f " , c);
		break ;
	case  3 :
		if(b == 0 ) {
			printf ( " No esta definida la divisi�n entre 0 \n " );	
		} 
		else {
			c = a / b;
			printf ( " La divisi�n es: % 0.3f " , c);
		}
		break ;
	case  4 :
		if (b == 0 ) {
			printf ( " Cualquier n�mero multiplicado por 0 da 0 \n " );
		} else {
			c = a * b;
			printf ( " La multiplicaci�n es: % 0.3f " , c);
		}
		break ;
	case  5 :
		if (b == 0 ) {
			printf ( " Cualquier n�mero elevado a 0 dara 1 \n " );
		} else {
			c = pow (a, b);
			printf ( " La potencia de % f  es: % f " , a, c);
		}	
		break ;	
	case  6 :
		c = sqrt (a);
		printf ( " La ra�z cuadrada de % f es: % f \n " , a, c);
		c = sqrt (b);
		printf( " La ra�z cuadrada de % f es: % f \n " , b, c);
		break ;
	case  7 :
		printf ( " Hasta luego\n " );
		break ;
		
	default :
		printf ( " No est� puesta correctamente la unidad \n " );
		return ( 0 );
	}
	
} 
