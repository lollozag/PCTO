#include<stdio.h>

void stampaCubo()
{
    int numero;
    int cubo;

    printf("Inserisci un numero: ");
    scanf(" %d", &numero);
    cubo = numero * numero * numero;
    printf("Il cubo di %d è %d\n", numero, cubo); 

}

int main() 
{
    stampaCubo();
    
    return 0;
}