/** Philipp Schwarberg
Aufgabe 3.2
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float zahlEins=0, zahlZwei=0;
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%f", &zahlEins);
    fflush(stdin);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%f", &zahlZwei);
    fflush(stdin);
    if (zahlEins > zahlZwei)
    {
        printf("%f ist > %f",zahlEins, zahlZwei);
    }else if(zahlEins < zahlZwei)
    {
        printf("%f ist < %f", zahlEins, zahlZwei);
    }else
    {
        printf("%f ist gleich %f", zahlEins, zahlZwei);
    }
    return 0;
}
