#include <iostream>
using namespace std ;

int hailstorm(int a)
{
    if (a == 1)
    {
        cout<< a << " " << endl ;
        return 1 ;
    }
    if (a%2 == 0)
    {
        cout<< a << " " ;
        return 1+ hailstorm(a/2) ;
    }
    else if (a%2 != 0)
    {
        cout << a << " " ;
        return 1 + hailstorm((3*a)+1) ;
    }
}
int  main()
{
    int x =0 ;
    cin >> x ;
    cout << hailstorm(x) ;
}
