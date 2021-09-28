#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, i=2, talalt=0;


        printf("Kérek egy számot: ");
        scanf("%d", &szam);


        for (i=2; i<=szam/2; i++) {
        if (szam % i)
            continue;

        else {
            talalt=1;
            break;
        }
}
        if (talalt)
            printf("A megadott szám nem prím.");
        else
            printf("A megadott szám prím.");

    return 0;
}
