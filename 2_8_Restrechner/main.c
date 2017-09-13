#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float rest_d =0, eingabe = 0, rest_s = 0, rest_h = 0, rest_m = 0;
    printf("Bitte Sekunden eingeben: \n");
    scanf("%f", &eingabe);
    fflush(stdin);

    //Berechnung
    rest_d = eingabe / 86400.;
    rest_h = eingabe / 3600.;
    rest_m = eingabe / 60.;
    rest_s = eingabe;

    printf("%f Tage, %f Stunden, %f Minuten, %f Sekunden", rest_d, rest_h, rest_m, rest_s);
    return 0;
}
