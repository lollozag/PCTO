#include <stdio.h>

int main() {
    int anno, numero1, numero2, numero3;

    printf("Inserisci un anno per verificare se questo sia bisestile o no\n");
    scanf("%d", &anno);
    
    numero1 = anno % 4;
    numero2 = anno % 100;
    numero3 = anno % 400;

    if (numero1 == 0 && numero2 != 0 || numero3 == 0)
    {
        printf("allora l'anno inserito può essere considerato bisestile");
    }
    else
    {
        printf("allora l'anno inserito non è certamente bisestile");
    }
return 0; 
}