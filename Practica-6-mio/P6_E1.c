//EJ1 Practica 6

#include <stdio.h>
#include <stdlib.h>

float cubo(float num); 

int main ()
{
    float cubo2,num;

    printf("Ingrese un numero\n");
    scanf("%f",&num);

    cubo2 = cubo(num);
    printf("El resultado es: %f\n",cubo2);

    return 0;
}


float cubo(float num)
{
float respuesta;
respuesta = num * num * num;
return respuesta;
}
