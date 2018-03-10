//
//  main.c
//  Uebungblatt2_4
//
//  Created by Philipp Schwarberg on 09.01.18.
//  Copyright © 2018 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>
void inc(int *p){++*p;}

int main(int argc, const char * argv[]) {
    int a[]={10,20}, i=0;
    
    inc(a);
    inc(&i);
    inc(&a[i]);
    inc(a+1);


}

