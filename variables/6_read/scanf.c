#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define c 2

int main()
{
int r;
float l, a;
printf("Introduce radio (entero): ");
scanf("%d", &r);

l=(2*r)*PI; 
a= pow (r, c)*PI; 
printf("La longitud de la circunferencia vale %0.2f\n", l);
printf("El área del círculo vale %0.2f\n", a);
}
