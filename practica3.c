#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b,a;
    printf("introduzca la base del rectangulo");
    scanf("%f",&b);
    printf("introduzca el area del rectangulo");
    scanf("%f",&a);
    float area = b*a;
    printf("base%.2f y altura %.2f es: %.2f",b,a,area);
}
