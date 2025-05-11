#include <stdio.h>

void sumaYpromedio(int *arr, int n, int *suma, float *promedio) {
    *suma = 0;
    for (int i = 0; i < n; i++) {
        *suma += *(arr + i);
    }
    *promedio = (float)(*suma) / n;
}

int main() {
    int n, suma;
    float promedio;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sumaYpromedio(arr, n, &suma, &promedio);
    printf("Suma = %d, Promedio = %.2f\n", suma, promedio);
    return 0;
}
