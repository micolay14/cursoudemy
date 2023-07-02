#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ca = 0, cs = 0;
    float nota;

    printf("Introduzca el numero de alumnos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Introduzca la nota del alumno %d:\n", i);
        scanf("%f", &nota);

        if (nota >= 5) {
            ca++;
        }
        else {
            cs++;
        }
    }

    printf("El numero de alumnos aprobados es %d y el de suspensos es: %d\n", ca, cs);

    return 0;
}
