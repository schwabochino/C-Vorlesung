#include <stdio.h>
#include <stdlib.h>

float tage = 0, ergebnis_h = 0, ergebnis_m = 0, ergebnis_s = 0;

int main()
{
    printf("Stundenrechner 1.0\n\n Bitte geben Sie eine Anzahl von Tagen ein: \n");
    scanf("%f", &tage);
    fflush(stdin);


    //Berechnung
    ergebnis_h = tage * 24;
    ergebnis_m = tage * 1440;
    ergebnis_s = tage * 86400;

    printf("%0f Tage sind %2f Stunden, %2f Minuten, %2f Sekunden", tage, ergebnis_h, ergebnis_m, ergebnis_s);
    return 0;
}
