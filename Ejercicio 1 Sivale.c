#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Ingrese dos números:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("Antes del intercambio: x = %d, y = %d\n", x, y);
    intercambiar(&x, &y);
    printf("Después del intercambio: x = %d, y = %d\n", x, y);
    return 0;
}
