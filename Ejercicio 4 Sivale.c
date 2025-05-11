#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int n) {
    for (int i = 0; i < n; i++) {
        *(destino + i) = *(origen + i);
    }
}

int main() {
    int n;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    int origen[n], destino[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &origen[i]);
    }
    copiarArreglo(origen, destino, n);
    printf("Arreglo copiado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destino[i]);
    }
    printf("\n");
    return 0;
}
