#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void invertirDigitos(int num){
    if (num > 0){
        printf("%d", num % 10);
        invertirDigitos(num / 10);
    }else
    {
        printf("\n", num % 10);
    }
    
}


int main()
{
    int numero = 0;

    system("cls");
    printf("Ingrese numero:\n");
    scanf("%d", &numero);

    printf("El numero invertido es: ");

    invertirDigitos(numero);

    system("pause");

    return 0;
}