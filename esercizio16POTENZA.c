#include<stdio.h>

unsigned long esponente;
double base, potenza;
int main(void)
{
    printf("\nInserisci la base ");
    scanf("%lf",&base);
    printf("\nInserisci l'esponente ");
    scanf("%lu", &esponente);
    potenza = 1;

    while (esponente-- > 0)
        potenza *= base;
    printf("\nPotenza = %e", potenza);
    return 0;
} 