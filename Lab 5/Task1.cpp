#include <iostream>

using namespace std ;

int main ()
{
    float num1=0 ;
    float num2=1 ;
    float num3=2 ;
    float num4=3 ;

    cout << "Please enter any 4 real numbers" ;
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    cin >> num4 ;

    float largest=6;

    if (num1 > num2 && num1> num3 && num1> num4)
    {
        largest= num1 ;
    }
    else if (num2 > num1 && num2> num3 && num2> num4)
    {
        largest = num2 ;
    }
    else if (num3 > num1 && num3> num2 && num3> num4)
    {
        largest = num3 ;
    }
    else
    {
        largest = num4 ;
    }
    cout << "The largest of " << num1 << ", " <<num2 << ", " << num3 << ", " << num4 << " is " << largest << endl ;
}
