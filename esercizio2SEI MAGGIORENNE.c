#include <stdio.h>

int main() {
    int anni;
    printf("Quanti anni hai?\n");
    scanf("%d", &anni);

    if (anni < 18)
    {
       printf("Sei minorenne");
    }
    else if (anni == 18)
    {
       printf("Sei maggiorenne");
    }
    else if (anni > 18)
    {
        printf("Sei maggiorenne");
    }
return 0;
}