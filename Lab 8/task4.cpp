#include <iostream>
#include <cmath>

using namespace std ;

int main ()
{
    int b=0 ;
    cout << "enter a binary number " << endl;
    cin >> b ;

    if (cin.fail())
    {
        cout << "Please enter a positive integar" << endl ;
        cin.clear() ;
        string dummy ;
        getline (cin , dummy) ;
        return 0 ;
    }

   int rem ;
   int x = b ;
   int sum=0 ;
   int digit ;
   int i=0 ;

    if (b<0)
    {
        cout << "the negative number is not valid" << endl;
        return 0 ;
    }

    while (x != 0)
    {
        rem = x%10 ;
        x=x/10 ;

        if (rem >1 )
        {
            cout << "Please enter a binary number " << endl;
            return 0 ;
        }

        digit= rem*pow(2,i) ;
        sum =sum+digit ;
        i++ ;

        }
        cout << "the integer is " << sum << endl;




}
