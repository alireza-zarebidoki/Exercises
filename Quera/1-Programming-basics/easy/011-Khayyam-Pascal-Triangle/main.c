#include <stdio.h>

int main()
{
    //Variables
    int n = 1;
    int lastLine[11];
    int newLine[11];
    int i,j;


    //Input
    scanf("%d",&n);


    //Calculation & Output
    lastLine[0] = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                newLine[j] = 1;
            }
            else
            {
                newLine[j] = lastLine[j-1] + lastLine[j];
            }
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ",newLine[j]);
            lastLine[j] = newLine[j];
        }
        printf("\n");
    }

    return 0;
}
