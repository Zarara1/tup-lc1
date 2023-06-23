//EJ5 Practica 6

#include <stdio.h>
#include <stdlib.h>

int suma(int num,int dig1,int dig2)
{
    int respuesta;
    dig1 = num / 10;
    dig2 = num % 10;
    respuesta = dig1 + dig2;
    return respuesta;
}

int main ()
{
    int num,dig1,dig2,resultado;
    
    printf("ingrese un numero\n");
    scanf("%d",&num);

    resultado = suma(num,dig1,dig2);
    printf("La suma de los digitos del numero %d es: %d",num,resultado);

}