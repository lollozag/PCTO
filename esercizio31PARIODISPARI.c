#include<stdio.h>

int main()
{
    int num;
    printf("Inserisci un numero a tua scelta: ");
    scanf("%d", &num);
    if (num%2==0)
    printf("pari");
    else
    printf("dispari");

    return 0;

}