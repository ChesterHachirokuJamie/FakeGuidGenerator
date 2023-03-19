#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
void main()
{
    srand(time(0));
    int lowerLimit = 0, upperLimit = 15;
    int i;
    int j;
    printf("Fake GUID Generator, generating 1 Fake GUID per second.\n");
    for (j = 0;; j++)
    {
        for (i = 0; i < 32; i++)
        {
            int r = lowerLimit + rand() % (upperLimit - lowerLimit);
            if (r == 10)
                printf("A");
            else if (r == 11)
                printf("B");
            else if (r == 12)
                printf("C");
            else if (r == 13)
                printf("D");
            else if (r == 14)
                printf("E");
            else if (r == 15)
                printf("F");
            else
                printf("%d", r);
            if (i == 7 || i == 11 || i == 15 || i == 19)
                printf("-");
        }
        printf("\n");
        Sleep(1000);
    }
}
