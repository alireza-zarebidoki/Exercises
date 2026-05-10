#include <stdio.h>

int main()
{
    //Variables
    int a=0,b=0;
    int i,j;
    int isPrime[10001] = {0};


    //Input
    scanf("%d %d",&a,&b);



    //Calculation
    for (i = 2; i < 10001; i++)
    {
        isPrime[i] = 1;
    }


    for (i = 2; i <= b; i++)
    {
        if (isPrime[i])
        {
            for (j = i*i; j <= b; j +=i)
            {
                isPrime[j] = 0;
            }
        }
    }

    //Output
    for (i = a; i <= b; i++)
    {
        if (isPrime[i]) printf("%d\n",i);
    }

    return 0;
}
