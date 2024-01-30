#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Inserisci un primo numero\n");
    scanf("%d", &numero1);

    printf("Inserisci un secondo numero\n");
    scanf("%d", &numero2);

    if (numero1 % numero2 == 0)
    {
        printf("allora numero1 è un multiplo del numero2");
    }
    else 
    {
        printf("allora numero1 non è un multiplo del numero2");
    }
return 0;
}