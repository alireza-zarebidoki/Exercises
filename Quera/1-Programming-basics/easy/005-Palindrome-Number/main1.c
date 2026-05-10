#include <stdio.h>

int main()
{
    //Variables
    char n[1000001];
    int a = 0;   //amount
    int test = 1;
    int i;

    //Input
    scanf("%s",n);

    //Calculation
    for (i = 0; n[i]; i++)
    {
        a++;
    }
    for ( i = 0; i <= a; i++)
    {
        if (n[i] != n[a-i-1]) test = 0;
    }

    //Output
    if (test) printf("YES");
    else printf("NO");


    return 0;
}
