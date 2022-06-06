#include <iostream>

using namespace std ;

int main ()
{
    cout << "please input your initial location in the form of X and Y co-ordinates " << endl;

    int x ;
    int y ;

    cout << "Please enter X co-ordinate" << endl ;
    cin >> x ;
    if (cin.fail())
    {
        cout << "only numbers are allowed" << endl;
        return 1 ;
    }

    cout << "Please enter Y co-ordinate" << endl ;
    cin >> y ;
     if (cin.fail())
    {
        cout << "only numbers are allowed" << endl;
        return 1 ;
    }

    cout << "Now take a step, if in north then press N, if south then S, if east then E, if west then W" << endl;
    char dir= 'e' ;
    cin >> dir ;

    switch (dir)
    {
    case 'n' :
        y++ ;
        break ;
    case 's' :
        y-- ;
        break ;
    case 'e' :
        x++ ;
        break;
    case 'w' :
        x-- ;
        break ;
    default:
        cout << "Please enter correct character" << endl;
        return 1;
    }
    cout << "Your new direction is " << x << "," << y <<endl ;


    }


