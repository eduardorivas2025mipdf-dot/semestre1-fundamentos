#include <stdio.h>

int main () {
    char nombre[50];
    printf("Escribe tu nombre: ");
    scanf("%s", nombre);
    printf("Hola %s, ¡tu entorno de C esta listo!\n", nombre);
    return 0;
}