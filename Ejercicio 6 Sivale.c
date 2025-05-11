#include <stdio.h>

int contarOcurrencias(int *arr, int n, int elemento) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == elemento) contador++;
    }
    return contador;
}

int main() {
    int n, x;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Ingrese el número que quiere contar: ");
    scanf("%d", &x);
    int total = contarOcurrencias(arr, n, x);
    printf("El número %d aparece %d veces.\n", x, total);
    return 0;
}
