#include <stdio.h>

int main() 
{
    int numero1, numero2, numero3, numero4;

    printf("Nel 1969 l'uomo è andato sulla Luna per la prima volta. \n Inserisci il tuo anno di nascita per sapere quanti anni prima o dopo questo evento storico sei nato: \n");
    scanf("%d", &numero2);
    
    numero1 = 1969;
    numero3 = numero2 - numero1;
    numero4 = numero1 - numero2;
    
    if (numero1 == numero2)
    {
        printf("allora sei nato nello stesso anno in cui l'uomo è stato per la prima volta sulla Luna. \n");
    }
    else if (numero2 > numero1)
    {
        printf("allora sei nato %d anni dopo lo sbarco sulla Luna. \n", numero3);
    }
    else
    {
        printf("allora sei nato %d anni prima lo sbarco sulla Luna. \n", numero4);
    }
    return 0; 
}      