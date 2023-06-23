//EJ3 Practica 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char primera_letra(char* letra)
{
return letra[0];
}

int main ()
{
char palabra[20];
printf("Ingrese una palabra\n");
scanf ("%s",&palabra);

printf("La primer letra de la palabra es: %c",primera_letra(palabra));



}