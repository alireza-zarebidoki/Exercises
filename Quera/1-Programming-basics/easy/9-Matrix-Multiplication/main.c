#include <stdio.h>

int main()
{
    //Variables
    int a,b,c;
    int matrix1[101][101];
    int matrix2[101][101];
    int finalMatrix[101][101] = {0};
    int i,j,z;


    //Input
    scanf("%d %d %d",&a,&b,&c);

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }



    //Calculation

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (z = 0; z < b; z++)
            {
                finalMatrix[i][j] += (matrix1[i][z] * matrix2[z][j]);
            }
        }
    }



    //Output
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",finalMatrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
