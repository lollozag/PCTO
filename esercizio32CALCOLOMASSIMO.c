#include <stdio.h>

int main()
{
	int x, y, massimo;
	
	printf("\nBenvenuto in questo programma. \n");
    printf("\nInserisci due numeri per determinare quale dei due è il massimo. \n");
    printf("\nSeleziona un primo numero a tua scelta \n");
    scanf("%d", &x);
    printf("\nSeleziona un secondo numero a tua scelta \n");
    scanf("%d", &y);

	
		if(x > y)
		{
			massimo = x;
			printf("\nIl numero x è il MASSIMO tra i due numeri\n");
		}
		else 
		{
			massimo = y;
			printf("Allora il numero y è il MASSIMO tra i due numeri\n");
		}
	
	printf("Il valore massimo e': %d\n", massimo);

	return 0;
}
