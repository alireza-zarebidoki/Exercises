#include <stdio.h>

int main()
{
    //Variables
    int n = 0;
    int exist[200001] = {0};
    int i = 0;
    int temp = 0;

    //Input
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
        scanf("%d",&temp);
        exist[temp] = 1;
    }

    //Output
    for (i = 1; i <= n; i++)
    {
        if(exist[i] == 0) printf("%d",i);
    }


    return 0;
}
