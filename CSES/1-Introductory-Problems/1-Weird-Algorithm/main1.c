#include <stdio.h>

int main()
{
    //Variables
    int n = 1;

    //Input
    scanf("%d",&n);

    //Calculation and Output
    printf("%d ",n);
    while (n != 1)
    {
        if (n%2) n = (n*3)+1;
        else n /=2;
        printf("%d ",n);
    }

    return 0;
}
