#include <stdio.h>

int main() 
{
    int numero;
    int x = 2;
    int divisori = 0;
    
    printf("Inserire un numero n a piacere per verificare che questo sia un numero primo: \n");
    scanf("%d", &numero);

    while (x < numero)
    {
        if (numero % x == 0)
        {
           divisori = divisori + 1;
        }
        x = x + 1;
    }
    if (divisori == 0)
    {
        printf("allora il numero inserito è un NUMERO PRIMO\n");
    }
    else
    {
        printf("allora il numero inserito NON è un NUMERO PRIMO\n") ; 
    }


    return 0; 
}