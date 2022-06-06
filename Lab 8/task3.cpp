#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
    int n= 0 ;
    cout << "enter the value of n for the sum of series" << endl;
    cin >> n ;
    double sum=0 ;
    double term ;

    for (int i=1 ;  i<=n ; i++)
    {
        term= (1.0/pow(i,i)) ;
        sum =sum+ term ;
        cout << term << endl ;
    }
    cout << sum << endl;
}
