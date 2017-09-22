#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wochentagZahl = 0;
    scanf("%i", &wochentagZahl);
    fflush(stdin);
    switch(wochentagZahl){
    case 1: printf("Montag");
    break;
    case 2: printf("Dienstag");
    break;
    case 3: printf("Mittwoch");
    break;
    case 4: printf("Donnerstag");
    break;
    case 5: printf("Freitag");
    break;
    }
}
