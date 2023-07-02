#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    printf("Ingrese la nota de los alumnos\n");
    scanf("%d",&nota);

    if (nota<5){
        printf("se quedo");
    }
    else if (nota == 6){
        printf("paso con las justas");
    }
    else if (nota == 7 || nota==8){
        printf("paso bien");
    }
    else if (nota == 9 || nota==10){
        printf("paso excelente");
    }
    else {
        printf("la nota intoducida no es valida");
    }
}
