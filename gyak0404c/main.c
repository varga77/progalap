#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, i=2, talalt=0;


        printf("K�rek egy sz�mot: ");
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
            printf("A megadott sz�m nem pr�m.");
        else
            printf("A megadott sz�m pr�m.");

    return 0;
}
