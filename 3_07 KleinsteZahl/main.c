#include <stdio.h>
#include <stdlib.h>

int main()
{
    float zahl1 =0, zahl2 =0, zahl3=0;
    printf("Geben Sie die erste Zahl ein:");
    scanf("%f", &zahl1);
    fflush(stdin);
    printf("Geben Sie die zweite Zahl ein:");
    scanf("%f", &zahl2);
    fflush(stdin);
    printf("Geben Sie die dritte Zahl ein:");
    scanf("%f", &zahl3);
    fflush(stdin);
    if((zahl1 < zahl2) && (zahl1 < zahl3)){
        printf("%f", zahl1);
        }else if((zahl2 < zahl3) && (zahl2 < zahl3)){
        printf("%f", zahl2);
        }
        else if(( zahl3 < zahl1)&&(zahl3<zahl2)){
        printf("%f",zahl3);
        }else printf("Es gibt mehrere kleinste Zahlen!");
    return 0;
}
