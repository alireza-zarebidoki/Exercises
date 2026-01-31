#include <stdio.h>

int main()
{
    //Variables
    long long int n = 1;

    //Input
    scanf("%lld",&n);

    //Calculation and Output
    printf("%lld ",n);
    while (n != 1)
    {
        if (n%2) n = (n*3)+1;
        else n /=2;
        printf("%lld ",n);
    }

    return 0;
}
