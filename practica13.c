#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hotel[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int temporadabaja = 0,temporadamedia = 0,temporadaalta = 0;

    for (int i=0; i<3; i++){
        for (int j=1; j<4; j++){
            if (j == 1){
                temporadabaja = temporadabaja + hotel[i][j];
            }
            if ( j == 2){
                temporadamedia = temporadamedia + hotel [i][j];
            }
            if ( j == 3){
                temporadaalta = temporadaalta + hotel [i][j];
            }
        }
    }
    float promediotemporadabaja = temporadabaja/3;
    float promediotemporadamedia = temporadamedia/3;
    float promediotemporadaalta = temporadaalta/3;

     printf("los precios de la remporada baja: %.2f\nPrecios temporada media: %.2f\nPrecios temporada alta: %.2f",promediotemporadabaja,promediotemporadamedia,promediotemporadaalta);
}

