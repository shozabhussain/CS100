#include <iostream>
using namespace std ;

void realNumber(double&a , int&b, double&c)
{
    b=a ;
    c=a-b ;
    return ;
}
int main()
{
    double r=0;
    int x=0 ;
    double y=0 ;
    cin >> r ;
    if (cin.fail())
    {
        cout << "invalid output" ;
        return 0;
    }
    realNumber(r,x,y) ;
    cout << x << endl;
    cout << y << endl ;


}
