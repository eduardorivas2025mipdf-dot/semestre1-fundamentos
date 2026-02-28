#include <stdio.h>

int main() {
    int n = 0;
    int suma = 0;
    
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // TU Tarea: Crear un For que sume de 1 hasta n
    // Guardar el resultado en la variable suma
    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    printf("La suma de 1 a %d es: %d\n", n, suma);
    return 0;

}