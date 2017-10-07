//
//  main.c
//  5_0_ZeigeraufZeiger
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

int main()
{
    int zahl = 7;
    int *zeiger = &zahl;
    int **zeigeraufzeiger = &zeiger;
    
    printf("Wert eingeben: ");
    scanf("%d", &zahl);
    
    printf("Zeiger: %d \nAdresse von zeiger: %d \nAdresse von Zeiger auf Zeiger: %d \nZeiger auf Zeiger: %d\n Zahl: %d\n", *zeiger, zeiger, zeigeraufzeiger, **zeigeraufzeiger, zahl);
    return 0;
}
