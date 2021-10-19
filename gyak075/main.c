#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, db=0;

        printf("Kerem a szamot: ");
        scanf("%d", &N);


        for (i=1; i<=N; i++) {
        if (negyzetszam_e(i)==1)
            db++;
            }

            printf("A negyzetszamok osszege: %d", db);

    return 0;
}

    int negyzetszam_e(int szam) {
        int gyok = sqrt((double)szam); //a szám négyzetgyökét int-re kerekítjük

        if (gyok * gyok == szam)
            return 1;

    return 0;
}

