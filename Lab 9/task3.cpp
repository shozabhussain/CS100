#include <iostream>

using namespace std;

int main()
{
    for(int i=0 ; i<6; i++)
    {
        int x= 0 ;
        for( x=1; x<=i ; x++)
        {
            cout << x ;
        }
        for( int y=0 ; y<((6*2)-2*x); y++)
        {
            cout << " " ;
        }
        int b= x-1 ;
        for(int z=0 ; z<i ; z++)
        {
            cout << b ;
            b-- ;

        }
        cout << endl ;
    }



























    return 0;
}
