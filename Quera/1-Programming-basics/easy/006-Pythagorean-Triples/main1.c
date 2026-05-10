#include <stdio.h>

int main()
{
    //Variables
    int a,b,c,x,y,z;

    //Input
    scanf("%d%d%d",&a,&b,&c);

    //Calculation
    if (a>b && a>c) {x = a ; y = b ; z = c;}
    else if (b>a && b>c) {x = b ; y = a ; z = c;}
    else  {x = c ; y = b ; z = a;}

    //Output
    if (x*x == y*y + z*z) printf("YES");
    else printf("NO");

    return 0;
}
