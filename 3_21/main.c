#include <stdio.h>
#include <stdlib.h>
//Geben Sie das kleine 1*1 aus
int main()
{
    int a = 1, b = 1, produkt = 0, kontrolle = 1;

    while(a<=10)
        {
            //b++ dann a*b bis b == 10 dann a++
            produkt = a*b;
            printf("%i * %i = %i\n",a, b, produkt);

            if (b==10)
            {
                b=1;
                a++;
            }
                else
                {
                    b++;
                }

        }
                 return 0;
}
