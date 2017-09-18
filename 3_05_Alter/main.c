#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alter=0;
    printf("Alter eingeben: ");
    scanf("%d", &alter);
    fflush(stdin);

    if((alter < 67) && (alter > 18))
    {
        printf("Erwachsener!\n");
    } else if (alter < 18 )
    {
        printf("Jugendlicher / Kind\n");
    } else if (alter > 67)
    {
        printf("Senior\n");
    }

return 0;
}
