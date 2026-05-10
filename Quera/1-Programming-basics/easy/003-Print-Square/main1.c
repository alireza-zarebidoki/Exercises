#include <stdio.h>

int main()
{
    //Variables
    int n = 3;
    int i,j;

    //Input
    scanf("%d",&n);


    //Calculation and Output
    for (i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n-2; i++)
    {
        printf("*");
        printf("%*s",n-2," ");
        printf("*");
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        printf("*");
    }

    return 0;
}
