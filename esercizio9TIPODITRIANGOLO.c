#include <stdio.h>

int main() 
{
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
        if (numero1 == numero2 && numero2 == numero3 && numero1 == numero3)
        {
            printf("I tre numeri possono essere considerati come le lunghezze dei lati di un TRIANGOLO EQUILATERO");
        }
        else if (numero1 == numero2 || numero2 == numero3 || numero1 == numero3)
        {
            printf("I tre numeri possono essere considerati come le lunghezze dei lati di un TRIANGOLO ISOSCELE");
        }
        else 
        {
            printf("I tre numeri possono essere considerati come le lunghezze dei lati di un TRIANGOLO SCALENO");
        }
    }
    else
    {
        printf("I tre numeri non possono essere considerati come le lunghezze dei lati di un qualsiasi TRIANGOLO");
    }
    return 0; 
}      