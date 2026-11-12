#include <stdio.h>
#include "traffic.h"

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- SMART TRAFFIC SIGNAL SIMULATOR ---\n");
        printf("1. Enter Traffic Density\n");
        printf("2. Display Signal Status\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enterDensity();
                break;

            case 2:
                displaySignalStatus();
                break;

            case 3:
                printf("Exiting simulator...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}