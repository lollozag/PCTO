#include <stdio.h>

int main()
{
    int x, y , z;
    float a;
    y = 0;
    z = 0;
        printf("Inserisci un numero : \n");
        scanf("%d", &x);

        while (x>= 0)
        {
            y++;
            z = z + x;
            a = z / y;
            printf("La media iniziale dei numeri introdotti è : %f\n", a);
            printf("Inserisci un numero : \n");
            scanf("%d", &x);
        }
        
    return 0;
}