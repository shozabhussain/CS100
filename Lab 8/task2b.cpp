#include <iostream>

using namespace std ;

int main ()
{
    int p= 0 ;
    cout << " Enter a number to check if it a perfect number " << endl ;
    cin >> p ;
    int sum =0 ;

    for (int i= 1; i<p ; i++)
    {
        if (p%i ==0)
        {
            sum= sum+i ;

    }
    }

    if (sum == p)
    {
        cout << "the number is perfect" << endl ;
    }
    else
    {
        cout << "the number is not perfect" << endl;
    }


}
