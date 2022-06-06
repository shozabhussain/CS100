#include <iostream>

using namespace std;

int main()
{
    float bill= (770) + 30 ;

    cout << "Bill is: " << bill/100 << "$" << endl;

    int dollar5=0 ;
    int dollar1=8 ;
    int dollar10=7 ;
    int rem= 6;

    int dollar = static_cast<int>(bill/100);
    //dollar=16;

    dollar10= dollar/10 ;
    cout << "number of 10 dollar bill: " << dollar10 << endl ;

    rem=dollar%10 ;

    dollar5 = rem/5 ;
    cout << "number of 5 dollar bill: " << dollar5 << endl ;

    rem=rem%5 ;

    dollar1 = rem/1 ;
    cout << "number of 1 dollar bill: " << dollar1 <<endl ;









    return 0;
}
