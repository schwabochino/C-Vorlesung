#include <stdio.h>
#include <stdlib.h>
//Rechner zur Berechnung von unterjährigen Zinsen
//Kt = Kt * ( 1 + i * (T2 - T1) / 360)

int main()
{
    float endKap=0, startKap=0, zinsen=0;
    float startMon=0, startTag=0;
    float endMon=0, endTag=0;
    float tz = 0, te =0;


    printf("Startkapital: ");
    scanf("%f", &startKap);
    fflush(stdin);
    printf("Monat der Einzahlung oder Beginn: ");
    scanf("%f", &startMon);
    fflush(stdin);
    printf("Tag der Einzahlung oder Beginn: ");
    scanf("%f", &startTag);
    fflush(stdin);

    printf("Monat der Abhebung oder Ende: ");
    scanf("%f", &endMon);
    fflush(stdin);
    printf("Tag der Abhebung oder Ende: ");
    scanf("%f", &endTag);
    fflush(stdin);

    printf("Zins z.B für 5% 5 eingeben für 5.5% 5.5 \n\n Prozent");
    scanf("%f", &zinsen);
    fflush(stdin);

    tz = (endMon - 1) *30 + endTag;
    te = (startMon -1) *30 + startTag;
    zinsen = zinsen / 100;

    endKap = startKap * (1+(zinsen*((tz-te)/360)));

    printf("Das Endkapital bertraegt: %2.f €\n", endKap);

    return 0;
}
