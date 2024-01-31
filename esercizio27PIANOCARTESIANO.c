#include<stdio.h>

int main()
{
    int ordinata;
    int ascissa;
    int ordinata;

    printf("\nBenvenuto in questa CALCOLATRICE GRAFICA\n");
    printf("Per cominciare, inserisci due numeri a tua scelta: uno che rapprresenta il valore delle ASCISSE, e l'altro quello delle ORDINATE\n");
    scanf("%d" "%d", ascissa, ordinata);

    if(ascissa > 0 && ordinata > 0)
    {
        printf("\n Allora il punto avente le coordinate da te selezionate si trova nel PRIMO QUADRANTE\n");
    }
    else if (ascissa < 0 && ordinata > 0)
    {
        printf("\n Allora il punto avente le coordinate da te selezionate si trova nel SECONDO QUADRANTE\n");
    }
    else if (ascissa < 0 && ordinata < 0)
    {
        printf("\n Allora il punto avente le coordinate da te selezionate si trova nel TERZO QUADRANTE\n");
    }
    else if (ascissa > 0 && ordinata < 0)
    {
        printf("\n Allora il punto avente le coordinate da te selezionate si trova nel QUARTO QUADRANTE\n");
    }
    else if (ascissa == 0 && ordinata == 0)
    {
        printf("\n Allora il punto avente le coordinate da te selezionate si trova nell'ORIGINE\n");
    }

 return 0;
}