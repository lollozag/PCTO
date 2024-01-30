#include <stdio.h>

int main() {
    int numero1, numero2, numero3, somma1_2, somma2_3, somma1_3;

    printf("Inserisci un numero1: \n");
    scanf("%d", &numero1);
    printf("Inserisci un numero2: \n");
    scanf("%d", &numero2);
    printf("Inserisci un numero3: \n");
    scanf("%d", &numero3);
    
    somma1_2 = numero1 + numero2;
    somma2_3 = numero2 + numero3;
    somma1_3 = numero1 + numero3;

    if (somma1_2 > numero3 && somma2_3 > numero1 && somma1_3 > numero2)
    {
        printf("I tre numeri possono essere considerati come lunghezze dei lati di un triangolo");
    }
    else
    {
        printf("I tre numeri non possono essere considerati come lunghezze dei lati di un triangolo");
    }
return 0; 
}