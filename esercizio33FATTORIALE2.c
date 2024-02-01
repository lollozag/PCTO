#include <stdio.h>

int main(){
    int numero;

    //Input
    printf("Inserisci un numero positivo");
    scanf("%d",&numero);

    //Calcolo del fattoriale
    int fattoriale=1;
    if(numero > 0){

        int i=1;
        while(i < numero){
        fattoriale=fattoriale*i;
        i = i + 1;
        }

    }

    //Output
    printf("Fattoriale: %d \n");

    return 0;
}

int fattoriale = 1;
if(numero > 0)
{
    int i = 1;
    while(i < numero){
        fattoriale=fattoriale * i;
        i = i + 1;
    }
    printf("Fattoriale: %d \n", fattoriale);
    return 0;
}


