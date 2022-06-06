#include <iostream>

using namespace std ;

int main ()
{
    int num1;
    int num2 ;

    cout << "Please enter number 1" << endl ;
    cin >> num1 ;
    if ( cin.fail())
    {
        cout << "wrong input" << endl ;
        return 0 ;
    }

    cout << "Please enter number 2 " << endl ;
    cin >> num2 ;
    if ( cin.fail())
    {
        cout << "wrong input" << endl ;
        return 0 ;
    }
    int i=1 ;
    int rem1=0 ;
    int rem2=0 ;
    int ans= 0 ;


    while (i<=num1 && i<=num2)
    {

    rem1= num1%i ;
    rem2= num2%i ;

    if (rem1 == 0 && rem2==0 )
    {
        ans = i ;
    }
    i++ ;
    }
    cout << "highest common factor is " << ans << endl;








}
