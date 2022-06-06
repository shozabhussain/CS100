#include <iostream>

using namespace std ;

int main ()
{
    int n=0 ;

    cout << "write n to get sum of first n numbers " << endl;
    cin >> n ;
    int sum=0 ;
    int o=1 ;

    for (int i=1 ; i<=n*2 ; i++)
    {
    if (i%2 != 0)
    {

    sum=sum+i;
    }
    }
    cout << "sum of first " << n << " odd numbers is " << sum << endl;
}
