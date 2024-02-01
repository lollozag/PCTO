#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    x = 0;
    char parola[100];

    printf("\nBenvenuto in questo programma!\n");
    printf("\nHai la possibilita di convertire i caratteri minuscoli in maiuscoli all'interno di una parola qualsiasi.\n");
    printf("\nPer cominciare, inserisci la tua parola a piacere in carattere minuscolo per poterla trasformare in maiuscolo.\n");
    scanf("%s", parola);
    printf("\nHai inserito la parola: %s", parola);
    
    
    while (parola[x] != '\0')
    {
        if(parola[x] >= 97 && parola[x] <= 122 )
        {
            parola[x] -= 32;
            printf("%c" , parola[x]);
        }
        
        else if(parola[x] >= 65 && parola[x] <= 90)
        {
            printf("%c", parola[x]);
        }
        x = x + 1;
    }
    printf("\nComplimenti! La tua parola modificata in carattere MAIUSCOLO è: %s", parola);

    return 0;
}


