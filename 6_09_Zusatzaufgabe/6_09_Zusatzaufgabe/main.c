//
//  main.c
//  6_09_Zusatzaufgabe
//
//  Created by Philipp Schwarberg on 16.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

void printArray(int*, int*);
void move(int *array, int *posX, char *zug, int *groesse);

int main()
{
    int groesse;
    scanf("%d", &groesse)
    int *array;
    
    array = (int*) calloc(groesse, sizeof(int));
    
    if(array != NULL) {
        
        printf("\nSpeicher ist reserviert\n");
        
    }else {
        
        printf("\nKein freier Speicher vorhanden.\n");
        
    }
    printArray();
}

printArray(int *array, int *groesse){
    
}
move(){
    
}
