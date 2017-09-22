#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wochenTagszahl=0;
    printf("Wochtagszahl eingeben: ");
    scanf("%i", &wochenTagszahl);
    fflush(stdin);

    if((wochenTagszahl<=1)&&(wochenTagszahl<=3)){
        printf("1. Haelfte");
    }else if((wochenTagszahl>3)&&(wochenTagszahl<=5)){
        printf("2. Haelfte");
        }else ("Wochenende");

}
