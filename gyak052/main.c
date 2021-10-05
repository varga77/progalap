#include <stdio.h>
#include <stdlib.h>
#define MERET 10


int main()
{
   int meret = 10;
   int tomb[meret];

   for(i=0;i<meret;i++) {
    tomb[i] = i*2;
    }

   for(i=0; i<10; i++) {

    printf ("a %d. elem: %d\n", i, tomb[i]);

   }




    return 0;
}
