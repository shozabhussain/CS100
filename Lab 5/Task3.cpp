#include <iostream>

using namespace std;

int main ()
{
    string name= "" ;
    float s=0 ;
    float h=1 ;
    const float hl=9.25;
    float o=4;

    cout << "Please enter the name of the person " ;
    cin >> name ;

    cout << "Please enter the number of hours worked in the week " << endl ;
    cin >> h ;

    if ( h>=0 && h<40 )
    {
        s=h*hl ;

        cout << "Salary Slip of " << name <<endl ;
        cout << "Hours worked = " << h << endl;
        //if (o> 0 )
        //{
        //cout << "Overtime = " << o << endl ;
        //}
        //else
        //{
             //cout << "Overtime = 0 " << endl ;
        //}
        cout << "Overtime= 0" << endl ;
        cout << "hourly wage= " << hl << endl ;
        cout << "Salary of " << name << " is " << s << endl ;
    }
    else if (h>40)
    {
        o=h-40 ;
        s= hl*40 + o*hl*1.5 ;

        cout << "Salary Slip of " << name <<endl ;
        cout << "Hours worked = " << h << endl;
        cout << "Overtime= " << o << endl;
        cout << "hourly wage= " << hl << endl ;
        cout << "Salary of " << name << " is " << s << endl ;
    }
    else if (h<0)
    {
        cout << "Please enter positive hours" << endl ;

    }

}
