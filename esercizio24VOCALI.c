#include<stdio.h>

void stampaLettera()
{
    char let;
    printf("Inserisci una lettera: ");
    scanf( " %c", &let);
    if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
    {
        printf("La tua lettera è una vocale");
    }
    else
    {
        printf("La tua lettera è una consonante");
    }
    
}

int main() {
    char let;
   
    stampaLettera();

    return 0;
}