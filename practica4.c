#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolares;
    printf("Introduzca los dolares que quiera convertir\n");
    scanf("%f",&dolares);
    //cada dolar vale 0.92 euros

    printf("%.2f dolares equivale a %.2f euros",dolares,dolares*0.90);
}

