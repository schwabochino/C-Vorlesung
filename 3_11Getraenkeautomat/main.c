#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wahl = 0;
    float kosten = 0;
    printf("Getraenkeautomat \n\n\n\n\n");

    printf("Waehlen Sie ein Getraenk aus\n");

    printf("1) Wasser\n");
    printf("3) Limonade\n");
    printf("3) Bier\n");

    printf("Geben Sie 1, 2, 3 ein:\n");
    scanf("%i", &wahl);

    switch(wahl){
    case 1: printf(" Werfen Sie 2.00 ein");
        break;
    case 2: printf(" Werfen Sie 1.00 ein");
        break;
    case 3: printf("Werfen Sie 0.50 ein");
        break;
        }
    return 0;
}
