#include <iostream>

using namespace std ;

int main ()
{
    int p ;
    int rem ;
    int i=2 ;
    cout << "Please enter a prime number " << endl;
    cin >> p ;

    if (cin.fail())
    {
        cin.clear() ;
        cout << "Please enter valid number " << endl;
    }

    if ( p<=0 || p==1 )
    {
                  cout << "the number is not prime number " << endl ;
            return 0 ;
    }

    while (i<p)
    {
        rem= p%i ;

        if (rem ==0 )
        {
            cout << "the number is not prime number " << endl ;
            return 0 ;
        }
        i++ ;
    }
    cout << "Your number is a prime number " << endl ;


}
