#include <stdio.h>
#include <stdlib.h>
int main()
{   int zahl=5276;
    int zahlT, zahlH, zahlE, zahlZ;
    zahlT = zahl / 1000;
    zahlH = zahl % 1000 / 100;
    zahlZ = zahl % 10;
    zahlE = zahl % 1;

    if((zahlT == 5) || (zahlH ==5)|| (zahlZ ==5)|| (zahlE ==5))
    {
        printf("knack ");
    }else if((zahlT == 7) || (zahlH ==7)|| (zahlZ ==7)|| (zahlE ==7))
    {
        printf("bums");
    }

    return 0;
}
/*
int main()
{
    int zahl = 1;
    int mod5 = 0;
    int mod7 = 0;

    while(zahl<600)
    {
        mod5 = zahl%5;
        mod7 = zahl%7;
        if((mod5==0) && (mod7 ==0))
        {
            printf("knack bums\n");
        }else if(mod7==0)
        {
            printf("bums\n");

        }else if(mod5==0)
        {
            printf("knack\n");
        }else
        {
            printf("%i\n", zahl);
        }
        //zerleger(zahl);
    zahl++;
    }
    return 0;
}
*/
