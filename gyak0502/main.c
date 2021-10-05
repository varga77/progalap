#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, db=0;


 /* T�mb l�trehoz�sa inicializ�ci�s list�val */
    double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int meret = sizeof(tomb)/sizeof(double); //t�mb m�ret�nek kisz�m�t�sa
    double limit=300.0;


    for(i=0;i<meret;i++) {
        printf("%.lf\n",tomb[i]);

    }


        printf("\n\nHUF/EUR �rfolyamok:\n");

            for (i=0; i<meret; i++) {
               /* printf("%d. ertek: ", i+1, tomb[i]);   */
                        /* Felt�telt kiel�g�t� elemek megsz�ml�l�sa */
                    if (tomb[i] < limit)
                        db++;
        }
    printf("Az arfolyam erteke %d-szor volt %.2f alatt.", db, limit);







        //Eld�nt�s algoritmus
                        //Feltessz�k, h. monoton n�v� a sorozat, nincs a monotonit�st elront� �rt�k
        int found=0;
            /* Monotonit�s vizsg�lat */
            for (i=1; i<meret && !found; i+=1) {
                if (tomb[i] < tomb[i-1])
                    found=1; //tal�lt a monotonit�st elront� elemet
        }

        printf("\nA sorozat monoton novo: %s", !found ? "igaz" : "hamis");



         /* Minimum kiv�laszt�s */
        int minindex=0;
            for(i=0; i<meret; i++) {
                if(tomb[i]<tomb[minindex])
                    minindex=i;
        }
        printf("\nA sorozat legkisebb eleme: %lf, sorszama: %d", tomb[minindex], minindex+1);



        /* Maximum kiv�laszt�s */
        int maxindex=0;
            for(i=0; i<meret; i++) {
                    if(tomb[i]>tomb[maxindex])
                        maxindex=i;
        }
        printf("\nA sorozat legnagyobb eleme: %lf, sorszama: %d\n", tomb[maxindex],maxindex+1);



        double osszeg = 0;
        double atlag;
        for(i=0; i<meret;i++) {
            osszeg = osszeg + tomb[i];
        }

        printf("A tombelemek atlaga: %lf\n",osszeg/meret);


        printf("\nSzoras:");
        for(i=0;i<meret;i++) {

            printf("%d. elem szorasa: %.1lf\n",i, atlag-tomb[i]);
        }

    return 0;
}
