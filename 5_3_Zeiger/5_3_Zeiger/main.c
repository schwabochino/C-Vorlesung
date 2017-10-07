//
//  main.c
//  5_3_Zeiger
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i=5;
    int *i_zeiger;
    i_zeiger = &i;
    
    printf("Ausgabe int Wert: %d\n", i);
    printf("Ausgabe Zeiger: %d\n", *i_zeiger);
    
    //Erweiterung
    printf("Adresse %p\n", i_zeiger);
    printf("Adresse int %p\n", &i);
   
    return 0;
}
