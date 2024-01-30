#include<stdio.h>
unsigned long n,d, count;
int main(void)
{
    printf("\nInserisci un numero intero positivo > 2 ");
    scanf("%lu",&n);
    d=2;
    while (n>1) 
    {
        while (n%d) d++;
        count=0;
        while (n%d==0) 
        { 
            /*oppure (!(n%d))*/
            n/=d;
            count++;
        } 
        printf("\n Un numero primo e' %lu con potenza %lu ", d, count);
    }
    return 0; 
}
