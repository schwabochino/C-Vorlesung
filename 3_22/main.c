#include <stdio.h>
#include <stdlib.h>
//3.22 Schreiben Sie ein Programm das nach der Fakult�t n! fragt und diese dann ausgibt.
int main()
{
    int n=1, fak=1, eingabe;

    printf("Bitte geben Sie die Fakult�t ein: ");
    scanf("%i", &eingabe);
    fflush(stdin);
    while(n<=eingabe)
    {
        fak =  fak*n++;
        printf("Fakult�t %i = %i\n",n-1, fak);
    }
   return 0;
}

