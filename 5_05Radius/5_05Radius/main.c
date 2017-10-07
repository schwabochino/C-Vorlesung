//
//  main.c
//  5_05Radius
//
//  Created by Philipp Schwarberg on 07.10.17.
//  Copyright © 2017 Philipp Schwarberg. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float berechnungUmfang(float *);
float berechneFlaeche(float *);

int main(){
    
    float radius = 1000;
    printf("Fläche %f\n", berechneFlaeche(&radius));
    printf("Umfang: %f\n", berechnungUmfang(&radius));
    
    return 0;
}


float berechnungUmfang(float *r){
    return 2* M_PI*(*r);
}

float berechneFlaeche(float *r){
    return (*r)*(*r)*M_PI;
   
}
