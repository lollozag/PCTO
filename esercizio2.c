#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, numero4, numero5;
    int numero6;
    

    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);
    scanf("%d", &numero4);
    scanf("%d", &numero5);
    
    numero6 = numero1 + numero2 + numero3 + numero4 + numero5;
    printf("Il tuo risultato è: %d", numero6);

    return(0);
}