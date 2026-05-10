#include <stdio.h>

int main()
{
    //Variables
    int n = 1;
    int sum = 0;
    int i;

    //Input
    scanf("%d",&n);

    //Calculation
    for (i = 1; i < n; i++)
    {
        if (n%i == 0) sum +=i;
    }

    //Output
    if (sum == n)printf("YES");
    else printf("NO");

    return 0;
}
