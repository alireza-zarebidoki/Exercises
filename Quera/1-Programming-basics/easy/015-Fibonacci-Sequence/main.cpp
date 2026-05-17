#include <iostream>
using namespace std;


void ShowFibNth(long int n1, long int n2)
{
    if (n2-n1)
    {
        cout << n2-n1 << endl;
        ShowFibNth(n2-n1,n1);
    }
}

int main()
{
    //Variables
    long int a1,a2;


    //Input
    cin >> a1 >> a2;


    //Calculation
    cout << a1 << endl;
    ShowFibNth(a1,a2);



    return 0;
}
