#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, numero4, numero5;
    int numero6;
    
    printf("Seleziona un primo numero a tua scelta \n");
    scanf("%d", &numero1);

    printf("Seleziona un secondo numero a tua scelta \n");
    scanf("%d", &numero2);

    printf("Seleziona un terzo numero a tua scelta \n");
    scanf("%d", &numero3);

    printf("Seleziona un quarto numero a tua scelta \n");
    scanf("%d", &numero4);

    printf("Seleziona un quinto numero a tua scelta \n");
    scanf("%d", &numero5);
    
    numero6 = numero1 + numero2 + numero3 + numero4 + numero5;
    printf("Il tuo risultato è: %d", numero6);

    return(0);
}