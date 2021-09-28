#include <stdio.h>
#include <stdlib.h>

int main()
{


   int szam, i=2, talalt=0;


    printf("Kérek egy számot: ");
    scanf("%d", &szam);


    while (i<=szam/2 && !talalt) {
        if (szam%i) {
            i++;
            continue; } //Utasítások sorrendje fontos!

        else talalt=1;
        }
        if (talalt) printf("A megadott szám nem prím.");
        else printf("A megadott szám prím.");





    return 0;
}
