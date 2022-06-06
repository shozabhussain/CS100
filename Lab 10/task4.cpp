#include <iostream>
using namespace std ;

int powerFunc(int a ,int b)
{
    int base= a ;
    for (int i=1 ; i<b ; i++)
    {
        base= base*a ;
    }
        return base ;
}
int main()
{
    int x;
    int y;
    cin >> x ;
     if (cin.fail())
    {
        cout << "invalid output " << endl;
        return 0 ;
    }
    cin >> y ;
    if (cin.fail() || y<0)
    {
        cout << "invalid input " << endl;
        return 0 ;
    }
    int ans= powerFunc(x ,y ) ;
    cout << ans << endl;
}
