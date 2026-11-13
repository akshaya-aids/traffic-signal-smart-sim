#include <stdio.h>
#include "traffic.h"

void enterDensity()
{
    int density;

    printf("Enter traffic density: ");
    scanf("%d", &density);

    if (density > 70)
        printf("HIGH traffic - Signal is RED\n");
    else if (density > 30)
        printf("MEDIUM traffic - Signal is YELLOW\n");
    else
        printf("LOW traffic - Signal is GREEN\n");
}

void displaySignalStatus()
{
    printf("Traffic signal status displayed.\n");
}