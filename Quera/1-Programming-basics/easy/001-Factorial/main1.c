#include <stdio.h>

int main()
{
    //Variables
    int n = 1;
    int f = 1;
    int i;

    //Input
    scanf("%d",&n);

    //Calculation
    for (i = 1; i <= n; i++)
    {
        f *=i;
    }

    //Output
    printf("%d",f);

    return 0;
}
