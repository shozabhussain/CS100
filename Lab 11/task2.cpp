#include <iostream>
#include <cmath>
using namespace std ;

double distance(double a1 , double a2, double b1, double b2)
{
    double d= sqrt((pow((a2-a1),2))+(pow((b2-b1),2))) ;
    return d ;
}

void midpoint(double a1 , double a2, double b1, double b2, double&c, double&d)
{
    c= (a1+a2)/2.0 ;
    d= (b1+b2)/2.0 ;
    return ;
}

void slope(double a1 , double a2, double b1, double b2, double&g, bool&check)
{
    g = (b2-b1)/(a2-a1) ;
    if ((a2-a1) == 0)
    {
        check= false ;
    }
    return ;
}

int main()
{
    double x1, x2, y1, y2, mx , my, g=0;
    bool c= true ;
    cout << "enter x1: " ;
    cin >> x1 ;
     if (cin.fail())
    {
        cout << "invalid output" ;
        return 0;
    }
    cout << "enter x2: "  ;
    cin >> x2 ;
     if (cin.fail())
    {
        cout << "invalid output" ;
        return 0;
    }
    cout << "enter y1: " ;
    cin >> y1 ;
     if (cin.fail())
    {
        cout << "invalid output" ;
        return 0;
    }
    cout << "enter y2: " ;
    cin >> y2 ;
     if (cin.fail())
    {
        cout << "invalid output" ;
        return 0;
    }
    cout << "Distance : " <<  distance(x1, x2, y1, y2 ) << endl;
    midpoint(x1, x2, y1, y2, mx, my) ;
    cout << "midpoint : " << mx << "," << my << endl;
    slope(x1, x2, y1, y2, g, c) ;
    if (!c)
    {
        cout << "Slope : " << "Undefined Slope " << endl;
    }
    else
    {
    cout << "Slope : " << g << endl;
    }
}

