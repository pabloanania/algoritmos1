#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int convertirBase16(int num){
    if (num > 0){
        int res = num % 16;
        convertirBase16(num / 16);
        printf("%x", res);
    }
}


int main()
{
    int numero = 0;

    system("cls");
    printf("Ingrese numero:\n");
    scanf("%d", &numero);

    printf("El numero en base 16 es: ");
    convertirBase16(numero);
    printf("\n");

    system("pause");

    return 0;
}