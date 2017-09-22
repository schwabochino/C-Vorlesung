#include <stdio.h>
#include <stdlib.h>

int main()
{
    int punkte=0;
    char note[15];
    printf("Punktzahl: ");
    scanf("%d", &punkte);
    fflush(stdin);

    if(punkte == 10){
        printf("Sehr gut!");
    }else if(punkte == 9){
            printf("gut");
        }else if(punkte == 8){
            printf("befriedigend");
        }else if(punkte == 7){
            printf("ausreichend");
        }else if(punkte == 7){
            printf("mangelhaft");
        }else if(punkte < 6 && punkte >= 1){
            printf("ungenuegend");
            }else{
                printf("Fehler bei der Eingabe!");
            }

    }



