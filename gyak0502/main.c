#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, db=0;


 /* Tömb létrehozása inicializációs listával */
    double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int meret = sizeof(tomb)/sizeof(double); //tömb méretének kiszámítása
    double limit=300.0;


    for(i=0;i<meret;i++) {
        printf("%.lf\n",tomb[i]);

    }


        printf("\n\nHUF/EUR árfolyamok:\n");

            for (i=0; i<meret; i++) {
               /* printf("%d. ertek: ", i+1, tomb[i]);   */
                        /* Feltételt kielégítõ elemek megszámlálása */
                    if (tomb[i] < limit)
                        db++;
        }
    printf("Az arfolyam erteke %d-szor volt %.2f alatt.", db, limit);







        //Eldöntés algoritmus
                        //Feltesszük, h. monoton növõ a sorozat, nincs a monotonitást elrontó érték
        int found=0;
            /* Monotonitás vizsgálat */
            for (i=1; i<meret && !found; i+=1) {
                if (tomb[i] < tomb[i-1])
                    found=1; //talált a monotonitást elrontó elemet
        }

        printf("\nA sorozat monoton novo: %s", !found ? "igaz" : "hamis");



         /* Minimum kiválasztás */
        int minindex=0;
            for(i=0; i<meret; i++) {
                if(tomb[i]<tomb[minindex])
                    minindex=i;
        }
        printf("\nA sorozat legkisebb eleme: %lf, sorszama: %d", tomb[minindex], minindex+1);



        /* Maximum kiválasztás */
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
