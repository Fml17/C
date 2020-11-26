#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suma(float  a, float b ){
	float resultado = 0;
	resultado= a + b;
	return resultado;
	}
	
float resta(float  a, float b ){
	float resultado = 0;
	resultado= a - b;
	return resultado;
	}
	
float multiplicacion(float  a, float b ){
	float resultado = 0;
	resultado= a * b;
	return resultado;
	}

 float division(float  a, float b ){
	float resultado = 0;
	resultado= a / b;
	return resultado;
	}

float potencia (float  a, float b ){
	float resultado = 0;
	resultado= pow (a,b);
	return resultado;
	}

float raizcuadrada (float c ){
	float resultado = 0;
	resultado= sqrt (c);
	return resultado;
	}
	
float factorial(float c){
	if (c == 0)
		return 1;
	else 
		return c * factorial (c - 1);
	}

int main()
{

	int opcion;
	float a, b, resultado;
	
	printf ("........................................................\n");
	printf("Ingresa el primer numero\n");
	scanf("%f",&a);
	a = a;
	printf ("........................................................\n");
	printf("Ingresa  el segundo numero\n");
	scanf("%f",&b);
	b = b;
	printf (".........................................................\n");
	
	do{
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raiz cudrada:\n");
	printf("\t 7.- Factorial:\n");
	printf("\t 8.- Salir:\n");
	printf (".........................................................\n");

	scanf("%d",&opcion);
	switch(opcion){
		
	case 1:
		resultado = suma(a,b);
		printf(" La suma es %0.3f\n",resultado);
		break;
	case 2:
		resultado = resta (a,b);
		printf("La resta es: %0.3f\n", resultado);
		break;
	case 3:
		if (b==0){
			printf("Cualquier numero multiplicado por 0 da 0\n");
		}
		else {
			resultado= multiplicacion (a,b);
			printf("La multiplicacion es: %0.3f\n",resultado);
		}
		break;
	case 4:
		if (b==0){
			printf("No esta definida la division entre 0\n");
		}
		else{
			resultado= division (a,b);
			printf("La division es: %0.3f",resultado);
		}
		break;
	case 5:
		if (b==0){
			printf("cualquier número elevado a 0 da 1\n");
		}
		else{
			resultado = potencia (a,b);
		printf("La potencia es: %0.3f\n",resultado);	
		}
		break;
	case 6:
		resultado= raizcuadrada (a);
		printf("La raiz cuadrada de %f es: %0.3f\n", a, resultado);
		resultado= raizcuadrada(b);
		printf("\nLa raiz cuadrada de %f es: %0.3f\n", b, resultado);
		break;
	
	case 7:
		resultado = factorial (a);
		printf ("El factorial de %0.3f es: %0.3f\n", a, resultado);
		resultado = factorial (b);
		printf ("El factorial de %0.3f es: %0.3f\n", b, resultado);
		break;
	
	case 8:
		printf (".......................................\n");
		printf("Hasta pronto\n");
		break;
	default:
		printf("No está puesta correctamente la unidad\n");
		return 0;
	}
		printf (".........................................................\n");
		printf("\nFin de switch\n");
		printf (".........................................................\n");

			
	}while(opcion !=8);
	printf("\nFin de Do-while\n");
	 

}
