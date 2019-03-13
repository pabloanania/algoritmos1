#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int sumarHasta(int num){
    if (num <= 0)
        return 1;
    else
        return num + sumarHasta(num - 1);
}


int main()
{
    int suma = 0;
    int numero;

    system("cls");
    printf("Ingrese un numero:\n");
    scanf("%d", &numero);

    suma = sumarHasta(numero);

    printf("la suma de los primeros %d numeros es: %d\n", numero, suma);

    return 0;
}