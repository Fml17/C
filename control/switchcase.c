#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "En Español");
	int opcion;
	float a, b, c;
	
	printf("Dame el primer numero\n");
	scanf("%f",&a);
	a = a;
	printf("Dame el segundo numero\n");
	scanf("%f",&b);
	b = b;
	
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raiz cudrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion){
		
	case 1:
		c= a +b ;
		printf("La suma es: %0.3f",c);
		break;
	case 2:
		c= a -b;
		printf("La resta es: %0.3f",c);
		break;
	case 3:
		if (b==0){
			printf("Cualquier numero multiplicado por 0 da 0\n");
		}
		else {
			c= a * b;
			printf("La multiplicacion es: %0.3f",c);
		}
		break;
	case 4:
		if (b==0){
			printf("No esta definida la division entre 0\n");
		}
		else{
			c= a / b;
			printf("La division es: %0.3f",c);
		}
		break;
	case 5:
		if (b==0){
			printf("cualquier número elevado a 0 da 1\n");
		}
		else{
			c= pow (a,b);
		printf("La potencia es: %0.3f",c);	
		}
		break;
	case 6:
		c= sqrt(a);
		printf("La raíz cuadrada de %0.3f es: %0.3f", a, c);
		c= sqrt(b);
		printf("La raíz cuadrada de %0.3f es: %0.3f", b, c);
		break;
	case 7:
		printf("Adios\n");
		break;
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}

} 
