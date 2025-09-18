#include <stdio.h>
#include <stdlib.h>

void imprimirArray(int *arr, int n) {
    printf("Elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int contarElementos(int *arr, int n) {
    return n;
}

int main() {
    int n;
    printf("Ingrese el número de elementos: ");
    scanf("%d", &n);

    int *p = (int*)malloc(sizeof(int) * n);
    if (p == NULL) {
        printf("Error: no se pudo reservar memoria\n");
        return 1;
    }

    printf("Ingrese %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    imprimirArray(p, n);
    printf("Cantidad de elementos: %d\n", contarElementos(p, n));

    free(p);

    return 0;
}