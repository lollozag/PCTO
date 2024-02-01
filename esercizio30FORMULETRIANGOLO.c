#include<stdio.h>

int main()
{
    int base, lato1, lato2;
    float area;
    float perimetro;
    float sqrt;

    printf("\nBenvenuto in questa CALCOLATRICE GRAFICA.\n");
    printf("\nCon questa nuova funzione hai la possibilità di calcolare il perimetro e l'area di un triangolo.\n");
    printf("\nPer cominciare, scegli le misure dei lato del triangolo.\n");
    printf("\nInserisci la base del triangolo.\n");
	scanf("%d", &base);
    printf("\nInserisci lato1 del triangolo.\n");
	scanf("%d", &lato1);
    printf("\nInserisci il lato3 del triangolo.\n");
	scanf("%d", &lato2);

    int perimetro = base + lato1 + lato2;
    printf("Il perimetro del triangolo formato dai tre lati selezionati è: %d\n", perimetro);

    int p = perimetro / 2;
    printf("Il semiperimetro del triangolo formato dai tre lati selezionati è: %d\n", p);
    
    double sqrt(double p * (p - base) * (p - lato1) * (p - lato2);
    area = p * (p - base) * (p - lato1) * (p - lato2);
    printf("L'area del triangolo formato dai tre lati selezionati è: %d\n", area);

	return 0;
}
    


    

    