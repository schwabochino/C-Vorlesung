//
//  main.c
//  5_0_zeiger
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int zahl = 7;
    int *zahl2; //initialiserung Zeiger
    
    zahl2 = &zahl;
    
    printf("Zeiger-Wert: %d \n", *zahl2); //zeiger
    printf("Zeiger-Adresse: %d\n", zahl2); //Adresse als int-Wert
    return 0;
}
