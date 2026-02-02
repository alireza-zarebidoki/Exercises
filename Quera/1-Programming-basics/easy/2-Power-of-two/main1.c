#include <stdio.h>

int main()
{
    //Variables
    int n = 1;
    int p = 2;
    int i;

    //Input
    scanf("%d",&n);

    //Calculation
    for (i = 1; n >= p; i++)
    {
        p *=2;
    }

    //Output
    printf("%d",p);

    return 0;
}
