#include <stdio.h>

int main()
{
    //Variables
    int n = 0;
    int i,j;


    //Input
    scanf("%d",&n);


    //Calculation & Output
    for (i = 1; i <= (n/2)+1; i++)
    {
        for (j = n-i-2; j >= 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= (2*i)-1; j++)
        {
            printf("*");
        }
        for (j = n-i-2; j >= 1; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= (2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n/2 ; i >= 1; i--)
    {
        for (j = 1; j <= n-i-2; j++)
        {
            printf(" ");
        }
        for (j = (2*i)-1; j >= 1; j--)
        {
            printf("*");
        }
        for (j = 1; j <= n-i-2; j++)
        {
            printf("  ");
        }
        for (j = (2*i)-1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
