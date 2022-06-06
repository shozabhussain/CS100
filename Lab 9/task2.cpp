#include <iostream>

using namespace std ;

int main ()
{
    int num=0 ;
    cout << "Enter a number" << endl ;
    cin >> num ;

    for (int i=2 ; i<num ; i++)
    {
        int rem= num%i ;
        if(rem == 0 )
        {
            bool prime= true ;
            for(int a=2 ; a<i ; a++)
            {
                int p= i%a ;
                if( p == 0)
                {
                    prime = false ;
                    break ;
                }

            }
            if (prime)
            {
                cout << i << endl;
            }
        }
    }
























    return 0;
}
