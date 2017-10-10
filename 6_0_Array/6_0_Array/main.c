//
//  main.c
//  6_0_Array
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(){
    float messwerte[1000];
    int i=0;
    for (i=1; i<=1000; i++){
            messwerte[i]=i;
            printf("%f\n",messwerte[i]);
    
    }
}
