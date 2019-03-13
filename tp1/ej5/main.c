#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int sumaDigitos(int num){
    if (num <= 0)
        return 0;
    else
        return num % 10 + sumaDigitos(num / 10);
}


int main()
{
    int numero = 0;
    int resultado;

    system("cls");
    printf("Ingrese numero:\n");
    scanf("%d", &numero);

    resultado = sumaDigitos(numero);

    printf("La suma de los digitos de %d = %d\n", numero, resultado);
    system("pause");

    return 0;
}