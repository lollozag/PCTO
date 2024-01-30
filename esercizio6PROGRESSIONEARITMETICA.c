#include <stdio.h>

int main() {
    int numero1, numero2, numero3, differenza1, differenza2;

    printf("Inserisci un primo numero\n");
    scanf("%d", &numero1);

    printf("Inserisci un secondo numero\n");
    scanf("%d", &numero2);

    printf("Inserisci un terzo numero\n");
    scanf("%d", &numero3);

    differenza1 = numero2 - numero1;
    differenza2 = numero3 - numero2;
    if (numero2 - numero1 == numero3 - numero2)
    {
        printf("allora numero1, numero2 e numero3 possono essere considerati una progressione aritmetica");
    }
    else
    {
        printf("in caso contrario, numero1, numero2 e numero3 non possono essere considerati una progressione aritmetica");
    }
return(0);
}