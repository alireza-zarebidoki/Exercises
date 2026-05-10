#include <stdio.h>

int main()
{
    //Variables
    int n;
    int in;
    int max = 0;
    int tempMax = 0;
    int i;


    //Input & Calculation
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&in);
        tempMax += in;
        if (tempMax < 0) tempMax = 0;
        if (tempMax > max) max = tempMax;
    }

    //Output
    printf("%d",max);


    return 0;
}
