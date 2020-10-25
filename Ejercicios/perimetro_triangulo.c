#include <stdio.h>

int main ()
{
	float p, a, b, c; 
	printf("Introduzca el valor del primer lado del triangulo:");
	scanf("%f" , &a);
	printf("Introduzca el valor del segundo lado del triangulo:");
	scanf("%f", &b);
	printf("Introduzca el valor del tercer lado del triangulo:");
	scanf("%f", &c);
	p = a + b + c;
	printf("El perimetro del triangulo es: %0.2f\n", p);
	
	
	
	
}
