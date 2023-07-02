#include <stdio.h>
#include <stdlib.h>

struct horae {
    int hora;
    int minuto;
};

struct entrada {
    struct horae hora1;
    int asistencias;
    float precio;
};

int main() {
    struct entrada el;
    char continuar = 's';

    while (continuar == 's') {
        printf("Introduce la hora de llegada (hora minuto): ");
        scanf("%d %d", &el.hora1.hora, &el.hora1.minuto);

        printf("Introduce el número de asistentes: ");
        scanf("%d", &el.asistencias);

        int total = 0;
        for (int i = 0; i < el.asistencias; i++) {
            int edad;
            printf("Introduce la edad del asistente %d: ", (i + 1));
            scanf("%d", &edad);

            if (edad < 6) {
                total += 0;
            } else if (edad >= 6 && edad <= 15) {
                total += 5;
            } else if ((edad >= 16 && edad <= 26) || edad > 65) {
                total += 8;
            } else {
                total += 10;
            }
        }

        if (el.asistencias >= 5) {
            el.precio = total - total * 0.1;
        } else {
            el.precio = total;
        }
        printf("Hora de entrada del grupo: %d\n", el.hora1.hora);
        printf("Minuto de entrada del grupo: %d\n", el.hora1.minuto);
        printf("Precio de las entradas del grupo: %.2f\n", el.precio);

        printf("¿Quiere continuar con otro grupo? (s/n): ");
        fflush(stdin); // Limpiar el búfer de entrada antes de leer el siguiente carácter
        scanf(" %c", &continuar); // Espacio antes del %c para evitar problemas con el búfer de entrada
        while (continuar == 'n'){
            scanf(" %c", &continuar);
        }

    }

    printf("Hasta la próxima.......\n");

    return 0;
}
