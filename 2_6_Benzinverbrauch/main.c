/*
Author: Philipp Schwarberg
08.09.17
WS17 Konzepte der prozedualen Programmierung
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float verbrauch = 0, kilometer = 0, liter = 0;

int main()
{
    printf("Willkommen zum Verbrauchsrechner! \n\n\n\n");

    //Eingabe durch Benutzer und bereinigung Tastaturpuffer
    fflush(stdin);
    printf("Bitte gefahrene Kilometer eingeben: \n");
    scanf("%4f", &kilometer);
    fflush(stdin);

    printf("Bitte verbrauch in Liter angeben: \n");
    scanf("%4f", &liter);
    fflush(stdin);

    //Berechnung Liter * 100/km
    verbrauch = (liter *100)/kilometer;
    printf("Der Verbrauch auf 100KM: %2f", verbrauch);

    return 0;
}
