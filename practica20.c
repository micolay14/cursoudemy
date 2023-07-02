#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("numero.txt","r");
    int suma,numero;

    while (feof(f)==0){
        fscanf(f,"%d",&numero);
        suma = suma + numero;
    }
    printf("la suma de todos los numeros del fichero es:%d\n",suma);

    fclose(f);
}
