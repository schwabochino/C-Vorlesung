//
//  main.c
//  uebungsblatt2_1
//
//  Created by Philipp Schwarberg on 09.01.18.
//  Copyright © 2018 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=3, b=4, c=a*b;
    
    for(c=a*b; c>0; c--){
        printf("*");
        if (c==1){
            printf("\n");
        }
    }
    a= a-1;
    printf("  ");
    for(c=a*b; c>0; c--){
            printf("*");
                if(c==1){
                    printf("\n");
                }
            }
    
    
    return 0;
}

