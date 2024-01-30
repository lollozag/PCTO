#include <stdio.h>

int main() 
{
    int x, y;
    printf("Inserisci un numero a tua scelta per calcolare il suo FATTORIALE\n");
    scanf("%d", &x);
    y = 1;
    while (x > 0)
    {
        y = y * x;
        x = x - 1;
    }
    printf("%d\n", y);
    return 0;
}