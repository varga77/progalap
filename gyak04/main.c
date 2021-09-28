#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, tipus;
double ido, sum_kf, sum_hk, sum_hb;
sum_kf = sum_hk = sum_hb = 0;
printf("H�ny adat lesz? "); scanf("%d", &N);
i = 1;
while (i<=N) {
printf("%d. hivas adatai: \n", i);
printf("Tipus [1-kulfoldi, 2-halozaton kivuli, 3-halozaton beluli]: ");
scanf("%d", &tipus);
printf("Beszelgetes ideje (percben): "); scanf("%lf", &ido);
/*T�bbir�ny� el�gaz�s: egym�sba �gyazott if utas�t�sok */
        if (tipus == 1) sum_kf = sum_kf + (ido*100); //100 Ft/perc
        else {
         if (tipus == 2) sum_hk = sum_hk + (ido*60); //60 Ft/perc
         else {
         if (tipus == 3) sum_hb = sum_hb + (ido*40); //40 Ft/perc
         else printf("Nem defini�lt tipus!");
 }
}
i++;
}
printf("\nA sz�mla v�g�sszege: %.2f (1) + %.2f (2) + %.2f (3) = %.2f Ft\n", sum_kf,
sum_hk, sum_hb, sum_kf+sum_hk+sum_hb);
return 0;
}
/*T�bbir�ny� el�gaz�s: if...else if szerkezet */
if (tipus == 1) sum_kf = sum_kf + (ido*100);
else if (tipus == 2) sum_hk = sum_hk + (ido*60);
else if (tipus == 3) sum_hb = sum_hb + (ido*40);
else printf("Nem defini�lt tipus!");
/*T�bbir�ny� el�gaz�s: switch utas�t�s */
switch (tipus) {
case 1: sum_kf = sum_kf + (ido*100); break;
case 2: sum_hk = sum_hk + (ido*60); break;
case 3: sum_hb = sum_hb + (ido*40); break;
default: printf("Nem defini�lt tipus!");
}
/*Enum (felsorolt t�pus�) konstansok haszn�lat�val*/
enum tip {KULFOLDI=1, HALOZATONK, HALOZATONB};
switch (tipus) {
case KULFOLDI: sum_kf = sum_kf + (ido*100); break;
case HALOZATONK: sum_hk = sum_hk + (ido*60); break;
case HALOZATONB: sum_hb = sum_hb + (ido*40); break;
default: printf("Nem defini�lt tipus!");
}
    return 0;
}
