//
//  zaehler.c
//  7_01
//
//  Created by Philipp Schwarberg on 16.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include "zaehler.h"


void fkt(void){
    
    extern int local1 = 10;
    int local2 = 10;
    local1--;
    local2--;
    
    printf("%d, %d, %d\n", local1, local2, zaehler);
}
