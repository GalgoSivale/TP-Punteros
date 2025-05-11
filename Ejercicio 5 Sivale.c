#include <stdio.h>

void concatenar(char *destino, char *origen) {
    while (*destino) destino++;
    while (*origen) {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Ingrese la primera cadena: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Eliminar el salto de línea que puede quedar con fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    concatenar(str1, str2);
    printf("Cadena concatenada: %s\n", str1);
    return 0;
}
