#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float radius=0, flaeche=0;

int main()
{
    printf("Kreisfl�che berrechnen\n\n\n\n");
    printf("Radius \n");
    scanf("%3f", &radius);
    fflush(stdin);

    //Berechnung pi*r*r
    flaeche= M_PI * radius * radius;
    printf("Die Fl�che betr�gt: %f\n", flaeche);

    return 0;
}
