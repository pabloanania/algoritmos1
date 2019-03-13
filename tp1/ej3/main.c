#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int division(int dividendo, int divisor){
    if (dividendo < divisor)
        return 0;
    else
        return 1 + division(dividendo - divisor, divisor);
}


int main()
{
    int dividendo = 0;
    int divisor = 0;
    int resultado;

    system("cls");
    printf("Ingrese dividendo:\n");
    scanf("%d", &dividendo);
    printf("Ingrese divisor:\n");
    scanf("%d", &divisor);

    resultado = division(dividendo, divisor);

    printf("%d / %d = %d\n", dividendo, divisor, resultado);
    system("pause");

    return 0;
}