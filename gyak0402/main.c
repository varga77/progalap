#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int lower, upper = 0;
    int ok;
    char ch;
    int db=0;





        do {
            ok = 1; // az alsó határ >= 1000 legyen
            printf("Add meg az intervallum also hatarat: ");


                if (scanf("%d", &lower)!=1 || (lower<1000))  {
                    printf("Hibas input\n");
                    ok = 0;

                while ((ch=getchar())!='\n') ; // input buffer ürítése
             }
            } while (!ok);


        do { // felsõhatár > alsóhatár és felsõhatár <= 2019
             ok = 1;

        printf("Add meg az intervallum felso hatarat: ");

                if (scanf("%d", &upper)!=1 || upper < lower || upper > 2021) {
                    printf("Hibas input\n");
                    ok = 0;

                while ((ch=getchar())!='\n') ; // input buffer ürítése
                }
                    } while (!ok);



    for(int year = lower;year<=upper;year++)
    {
        if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
        db++;

    }
    print("A %d es a %d evek kozott %d darab szokowv van", lower, upper,);




    return 0;
}
