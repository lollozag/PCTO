int main()
{
    int base, altezza, lato1, lato2;
    float area;
    float perimetro;

    printf("\nBenvenuto in questa CALCOLATRICE GRAFICA.\n");
    printf("\nCon questa nuova funzione hai la possibilità di calcolare il perimetro e l'area di un triangolo.\n");
    printf("\nPer cominciare, scegli le misure dei lato del triangolo.\n");
    printf("Inserisci la base del triangolo.\n");
	scanf("%d", &base);
    printf("\nInserisci l'altezza del triangolo.\n");
	scanf("%d", &altezza);
    printf("\nInserisci il lato3 del triangolo.\n");
	scanf("%d", &lato3);

    perimetro = base + lato1 + lato2;
    area = (base*altezza)/2.0;


	printf("L'area del triangolo vale: %.2f", area);

	return 0;
}
    


    

    