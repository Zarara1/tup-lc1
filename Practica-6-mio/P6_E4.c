//EJ4 Practica 6

#include <stdio.h>
#include <stdlib.h>

int esPrimo(int num)
{
    for (int i = 2; i  <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
return 1;
}

int main ()
{
int num,res;

printf("ingrese un numero entero\n");
scanf("%d",&num);

res = esPrimo(num);
printf("1 es primo,0 compuesto: %d",res);

return 0;
}