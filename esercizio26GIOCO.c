#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
        int r;
        int numero;
        int punti;

    punti = 0;
    numero = 0;
        printf("\n Benvenuto in questo programma di gioco. \n");
        printf("\n Il tuo obiettivo è indovinare un numero generato casualmente da me. \n");
        printf("\n Ti verrà assegnato un punto ogni volta che riuscirai a indovinare il numero generato, avendo scelto prima il tuo numero. \n");
        printf("\n Il gioco finisce quando riuscirai a totalizzare un totale di ben DIECI PUNTI. \n");

    while(numero>=0)
    {
        printf("\n Per cominciare, scegli un numero a tua scelta da 1 a 10: \n");
        scanf("%d", &numero);

        srand(time(NULL));
        r = rand() % 11;
        if(numero == r)
        {
            printf("\n Hai indovinato il numero generato. Complimenti! Hai ottenuto un punto");
            punti = punti + 1;
            printf("Hai %d punti\n", punti);
        }
        else if(numero != r)
        {
            printf("\n Non hai indovinato il numero generato. Peccato! Non hai ottenuto nessun punto"); 
            punti = punti + 0;
        }
        else{
            printf("Hai perso");
        }
    }
    

    return 0;
}
