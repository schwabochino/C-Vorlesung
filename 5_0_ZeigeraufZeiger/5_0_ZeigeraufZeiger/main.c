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
    
    printf("Zeiger: %d, Zeiger auf Zeiger: %d, Zahl: %zahl", zeiger, zeigeraufzeiger, zahl);
    return 0;
}
