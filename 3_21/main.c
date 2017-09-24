#include <stdio.h>
#include <stdlib.h>
//Geben Sie das kleine 1*1 aus
int main()
{
    int a = 1, b = 1, produkt = 0, kontrolle = 1;
    while(a<10)
    {
        produkt = a * b;
        printf("%i * %i = %i!\n", a, b, produkt);
        b++;

        /*kontrolle = b%10;
        if(kontrolle==0){
            a++;
        }else
        {
                    produkt = a * b;
        printf("%i * %i = %i!\n", a, b, produkt);
        b++;*/
        }

    }
    return 0;
}
