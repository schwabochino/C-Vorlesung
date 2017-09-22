/*Philipp Schwarberg*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wert1 = 999999, wert2=9999, wert3 = 10;
    if (wert1 < wert2 < wert3) printf("%d\n", wert2); //Wert wird ausgegeben weil wert2 < wert3 und somit wahr

    //3.04
    printf("Wert für wahr: %d\t Wert für falsch: %d\n", 2<3, 7!=7);
return 0;
}
