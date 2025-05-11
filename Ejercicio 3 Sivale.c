#include <stdio.h>

void mayorYmenor(int *arr, int n, int *mayor, int *menor) {
    *mayor = *menor = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *mayor) *mayor = *(arr + i);
        if (*(arr + i) < *menor) *menor = *(arr + i);
    }
}

int main() {
    int n, mayor, menor;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    mayorYmenor(arr, n, &mayor, &menor);
    printf("Mayor = %d, Menor = %d\n", mayor, menor);
    return 0;
}
