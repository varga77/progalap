#include <stdio.h>
#include <stdlib.h>

int main()
{


   int szam, i=2, talalt=0;


    printf("K�rek egy sz�mot: ");
    scanf("%d", &szam);


    while (i<=szam/2 && !talalt) {
        if (szam%i) {
            i++;
            continue; } //Utas�t�sok sorrendje fontos!

        else talalt=1;
        }
        if (talalt) printf("A megadott sz�m nem pr�m.");
        else printf("A megadott sz�m pr�m.");





    return 0;
}
