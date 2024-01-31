#include<stdio.h>

void fase1()
{
        int x;
        int y;
        int operazione; 
        int risultato;

        printf("Sei entrato nella calcolatrice");
        printf("\n Inserisci un primo numero a tua scelta: \n");
        scanf("%d", &x);
        printf("\n Inserisci un secondo numero a tua scelta: \n");
        scanf("%d", &y);

        printf("\n Scegli quale operazione eseguire: \n 1) addizzione\n 2) sottrazione\n 3) divisione\n 4) moltiplicazione\n");
        scanf("%d", &operazione);

        if(operazione == 1)
        {
                risultato = x + y;
                printf("\n La SOMMA dei due numeri selezionati è : %d\n", risultato);
        }
        else if(operazione == 2)
        {
                risultato = x - y;
                printf("\n La DIFFERENZA dei due numeri selezionati è : %d\n", risultato);
        }
        else if(operazione == 3)
        {
                risultato = x / y;
                printf("\n Il QUOZIENTE dei due numeri selezionati è : %d\n", risultato);
        }
        else if(operazione == 4)
        {
                risultato = x * y;
                printf("\n Il PRODOTTO dei due numeri selezionati è : %d\n", risultato);
        }
        else
        {
                printf("Si prega di tornare indietro e selezionare un numero da 1 a 4 per svolgere le operzioni consentite");
        }

 
}

int main() 
{
    fase1();

    return 0;
}
