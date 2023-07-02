#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jugador {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del jugador %d: ", i + 1);
        fgets(jugadores[i].nombre, sizeof(jugadores[i].nombre), stdin);
        jugadores[i].nombre[strcspn(jugadores[i].nombre, "\n")] = '\0'; // Eliminar el salto de línea de fgets
        printf("Introduce la edad del jugador %d: ", i + 1);
        scanf("%d", &jugadores[i].edad);
        printf("Introduce la altura del jugador %d: ", i + 1);
        scanf("%f", &jugadores[i].altura);

        fflush(stdin); // Eliminar caracteres adicionales del búfer de entrada
    }

    int opcion;
    printf("Introduzca la opcion que desea realizar:\n1-Listar jugadores\n2-Buscar jugador\n3-Jugador mas alto\n0-Salir\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        for (int i = 0; i < 5; i++) {
            printf("Jugador %d: Nombre: %s, Altura: %.2f\n", i + 1, jugadores[i].nombre, jugadores[i].altura);
        }
    } else if (opcion == 2) {
        char nombre_jugador[50];
        printf("Introduce el nombre del jugador que desea buscar: ");
        fflush(stdin);
        fgets(nombre_jugador, sizeof(nombre_jugador), stdin);
        nombre_jugador[strcspn(nombre_jugador, "\n")] = '\0'; // Eliminar el salto de línea de fgets
        int encontrado = 0;

        for (int i = 0; i < 5; i++) {
            if (strcmp(jugadores[i].nombre, nombre_jugador) == 0) {
                encontrado = 1;
                printf("El jugador se encuentra en la lista. Edad: %d, Altura: %.2f\n", jugadores[i].edad, jugadores[i].altura);
                break;
            }
        }

        if (encontrado == 0) {
            printf("Jugador no encontrado.\n");
        }
    } else if (opcion == 3) {
        float mayor_altura = jugadores[0].altura;
        int indice_mayor_altura = 0;

        for (int i = 1; i < 5; i++) {
            if (jugadores[i].altura > mayor_altura) {
                mayor_altura = jugadores[i].altura;
                indice_mayor_altura = i;
            }
        }

        printf("El jugador de mayor altura es %s. Edad: %d\n", jugadores[indice_mayor_altura].nombre, jugadores[indice_mayor_altura].edad);
    }

}
