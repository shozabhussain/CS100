#include <iostream>

using namespace std ;

int main ()
{
    long date=46544 ;
    cout << "Please enter the date in the format (ddmmyy) without dashes" << endl ;
    cin >> date ;

    int day= date/10000 ;
    int rem1 = date%10000 ;
    int month = rem1/100 ;
    int year = rem1%100 ;

    if (date < 0)
    {
        cout << "please enter the positive date" ;
    }
    else if (day>31 || month>12)
    {
        cout << "the length of the date (i.e integer value) is not correct " <<endl ;
    }
    else if ( month == 01)
    {
        cout <<"The date is " << day << " " << "January " << 2000+year << endl;
    }
    else if ( month == 02)
    {
        cout <<"The date is " << day << " " << "February " << 2000+year << endl;
    }
    else if ( month == 03)
    {
        cout <<"The date is " << day << " " << "March " << 2000+year << endl;
    }
    else if ( month == 04)
    {
        cout <<"The date is " << day << " " << "April " << 2000+year << endl;
    }
    else if ( month == 05)
    {
        cout <<"The date is " << day << " " << "May " << 2000+year << endl;
    }
    else if ( month == 06)
    {
        cout <<"The date is " << day << " " << "June " << 2000+year << endl;
    }
    else if ( month == 07)
    {
        cout <<"The date is " << day << " " << "July " << 2000+year << endl;
    }
    else if ( month == 8)
    {
        cout <<"The date is " << day << " " << "August " << 2000+year << endl;
    }
    else if ( month == 9)
    {
        cout <<"The date is " << day << " " << "September " << 2000+year << endl;
    }
    else if ( month == 10)
    {
        cout <<"The date is " << day << " " << "October " << 2000+year << endl;
    }
    else if ( month == 11)
    {
        cout <<"The date is " << day << " " << "November" << 2000+year << endl;
    }
    else if ( month == 12)
    {
        cout <<"The date is " << day << " " << "December" << 2000+year << endl;
    }


}
