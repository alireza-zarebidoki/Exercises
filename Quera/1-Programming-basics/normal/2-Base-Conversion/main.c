#include <stdio.h>

int main()
{
    //Variables
    int a,b;
    int c[1000001];
    int len = 0;
    int sum1=0,sum2=0;
    int i,j;


    //Input
    scanf("%d %d",&a,&b);


    //Calculation
    for (i = 0; a; i++)
    {
        c[i] = a%b;
        a /=b;
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (i%2) sum1 += c[i];
        else sum2 += c[i];
    }

    //Output
    if (sum1 == sum2) printf("Yes");
    else printf("No");

    return 0;
}
