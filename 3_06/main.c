#include <stdio.h>
#include <stdlib.h>

int main()
{
    int punkte=0;
    printf("Punktzahl: ");
    scanf("%d", &punkte);
    fflush(stdin);

    if (punkte >= 10);
    {
        printf("Note: Sehr Gut!\n");

    } else if(punkte ==  9)
    {
        printf("Note: Gut!\n");

    } else if(punkte ==  8)
    {
        printf("Note: befriedigend!\n");

    }else if(punkte ==  7)
    {
        printf("Note: ausreichend!\n");

    }else if(punkte ==  6)
    {
        printf("Note: mangelhaft!\n");

    }else if(punkte < 6)
    {
        printf("Note: ungenügend\n");
    }
    return 0;
}
