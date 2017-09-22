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
    } else if ((alter =< 18) && (alter => 0) )
    {
        printf("Jugendlicher / Kind\n");
    } else if (alter > 67)
    {
        printf("Senior\n");
    } else printf("Fehler bei der Eingabe!")

return 0;
}
