#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    float a ;
    float b ;
    float c ;

    cout << "Please enter a value for a" << endl;
    cin >> a;
    if (cin.fail())
    {
        cout << "only numbers are allowed" << endl;
        return 1 ;
    }

    cout << "Please enter  value for b" << endl ;
    cin >> b;
    if (cin.fail())
    {
        cout << "only numbers are allowed" << endl;
        return 1 ;
    }

    cout << "please enter a value for c" << endl;
    cin >> c ;
    if (cin.fail())
    {
        cout << "only numbers are allowed" << endl;
        return 1 ;
    }


    float dis= (b*b)-(4*a*c) ;

    switch (dis==0)
    {
    case true :
            cout << "there are exactly one real root given by " ;
            cout << ((-b)/(2*a)) << endl;
            break ;
            return 1 ;

    case false :

    switch (dis>0)
    {

        case true :
        cout << "there are two real distinct roots given by " ;
        cout << ((-b+sqrt(dis))/2*a) << " and " << ((-b-sqrt(dis))/2*a) << endl;
        break ;

        case false :
            cout << "there are two distinct complex roots given by " ;
            cout << (-b/2*a) << " + i" << (sqrt(-1*dis)/2*a) << " and " << (-b/2*a) << " - i" << (sqrt(-1*dis)/2*a) << endl ;
            break ;
    }

    }






}
