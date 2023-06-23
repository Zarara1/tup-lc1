//EJ2 Practica 6

#include <stdio.h>
#include <stdlib.h>


int signo(float num) {
    if (num < 0) {
        return -1;
    } else if (num > 0) {
        return 1;
    } else {
        return 0;
    }
}


int main()
{
float num;
int signo1;

printf("Ingrese un numero:");
scanf("%f",&num);

signo1 = signo(num);
printf("%d",signo1);

return 0;
}
