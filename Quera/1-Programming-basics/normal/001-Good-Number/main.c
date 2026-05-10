#include <stdio.h>

int main()
{
    //Variables
    int k;
    int i,j;
    int goodNum = 0;
    int numDivisors = 0;


    //Input
    scanf("%d",&k);


    //Calculation
    for (i = 1; numDivisors < k ; i++)
    {
        numDivisors = 0;
        goodNum += i;
        for (j = 1; j <= goodNum; j++)
        {
            if (goodNum % j == 0) numDivisors++;
        }
    }

    //Output
    printf("%d",goodNum);


    return 0;
}
