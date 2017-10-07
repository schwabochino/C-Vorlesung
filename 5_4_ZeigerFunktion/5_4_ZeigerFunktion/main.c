//
//  main.c
//  5_4_ZeigerFunktion
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

void einlesen(int*, int*);//Aufruf der Funktion die weiter unten erstellt wurde

int main() {
    int zahl1 = 0, zahl2=0;
  
    
    einlesen(&zahl1, &zahl2);//&zahl1 übergibt die Adresse von zahl1

    printf("Produkt=%d\n",zahl1*zahl2);
    return 0;
}

void einlesen(int *z1, int *z2)//funktion zum einlesen von Nutzereingabe
{
    printf("Eingabe:\n");
    scanf("%d", z1);
    printf("Eingabe:\n");
    scanf("%d", z2);
}
