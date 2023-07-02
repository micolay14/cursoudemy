#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vector[5];

    for (int i = 0; i < 5; i++) {
        printf("Introduce un numero real: ");
        scanf("%f", &vector[i]);
    }

    float *puntero = &vector[0];
    float media = 0;

    for (int i = 0; i < 5; i++) {
        media = media + *(puntero + i); // Corregir el índice aquí, usar i en lugar de 1
    }

    media = media / 5;
    printf("La media de los valores del vector es %.2f\n", media);
}
