#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i=0; i<5;i++){
        printf("Introduce un peso para almacernarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }
    float promedio = suma/5;
    int con = 0;
    int cm = 0;

    for (int i=0;i<5;i++){
        if(pesos[i]>= promedio){
            con ++;
        }
        else{
            cm++;
        }
    }
    printf("N pesos mayores o iguales que el promedio: 5d, N pesos menores que el promedio : %d",con,cm);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i=0; i<5;i++){
        printf("Introduce un peso para almacernarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }
    float promedio = suma/5;
    int con = 0;
    int cm = 0;

    for (int i=0;i<5;i++){
        if(pesos[i]>= promedio){
            con ++;
        }
        else{
            cm++;
        }
    }
    printf("N pesos mayores o iguales que el promedio: 5d, N pesos menores que el promedio : %d",con,cm);
}
