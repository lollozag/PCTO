#include <stdio.h>

int main()
{
    int quantita;
    float prezzounitario = 5;
    float totale, totale10, totale15;
    while (quantita >= 0)
    {
        printf("Inserisci una quantità a tua scelta da acquistare : \n");
        scanf("%d", &quantita);
        if (quantita > 30 && quantita <= 50)
        {
            totale10 = prezzounitario * 0.9 * quantita;
            printf("Il costo totale del tuo ordine è: %f \n", totale10);
        } 
        else if (quantita > 50)
        {
            totale15 = prezzounitario * 0.85 * quantita;
            printf("Il costo totale del tuo ordine è: %f \n", totale15);
        }
        else if (quantita > 0)
        {
            totale = quantita * prezzounitario;
            printf("Il costo totale del tuo ordine è %f: \n", totale);
        }       
        else
        {
            break;
        }
    }
        
   return 0;      
}