#include <stdio.h>
#include <stdlib.h>

int main()
{
    int punkte=0;
    printf("Punktzahl: ");
    scanf("%d", &punkte);
    fflush(stdin);


    switch(punkte)
    {

        case 10: printf("sehr gut!");
        break;
        case 9: printf("gut");
        break;
        case 8: printf("befriedigend");
        break;
        case 7: printf("ausreichend");
        break;
        case 6: printf("mangelhaft");
        break;
        case 5:printf("ungenuegend");
        break;
        case 4:printf("ungenuegend");
        case 3:printf("ungenuegend");
        case 2:printf("ungenuegend");
        case 1:printf("ungenuegend");
        case 0: printf("ungenuegend");
        break;
    }
    /*
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
*/
    }



