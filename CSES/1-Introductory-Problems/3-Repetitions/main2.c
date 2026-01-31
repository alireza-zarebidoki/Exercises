#include <stdio.h>

int main()
{
    //Variables
    char in[1000001];
    int temp = 1;
    int out = 1;
    int i;

    //Input
    scanf("%s",in);

    //Calculation
    for (i = 1; in[i]; i++)
    {
        if (in[i] == in[i-1])
        {
            temp++;
            if(temp>= out)out = temp;
        }
        else
        {
            temp = 1;
        }

    }

    //Output
    printf("%d",out);

    return 0;
}
