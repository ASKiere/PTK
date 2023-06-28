#include <stdio.h>
#include <math.h>
#define conversion 0.45359237

void main() 
{
    int cancelautoclose;
    int choice;
    double inputp;
    double inputk;

    printf("Welcome to PTK!\n\nPress '1' to do pound to kilo\nand press '2' for kilo to pound!\n\n");
    scanf("%d", &choice);
    switch(choice) 
    {
        case 1: 
            printf("You have chosen pound to kilo!\nPounds: ");
            scanf("%lf", &inputp);
            printf("\n\nConversion to kilos: %lf", (inputp * conversion));
            scanf("%d", &cancelautoclose);
        break;

        case 2:
            printf("You have chosen kilo to pound!\nKilos: ");
            scanf("%lf", &inputk);
            printf("\n\nConversion to pounds: %lf", (inputk / conversion));
            scanf("%d", &cancelautoclose);
        break;
    }
}