#include <stdio.h>
#include <stdlib.h>

//3.20 Geben Sie ein Rechteck 10*10 Zeichen mit * aus

int main()
{
    int y=0, i=1;

    while(i<100)
    {
        y = i%10;
        if(y==0){
            printf("\n");
        }else
    printf("*");
    i++;
    }
    return 0;
}
