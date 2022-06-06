#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float radius=0;
    float h=1 ;
    char shape= 'a' ;
    float area= 0;
    float volume=0 ;
    const float PIE= 3.142 ;

    cout << "Please choose a geometric shape by giving a suitable variable " << endl ;
    cout << "( sphere=a , cylinder=c , right circular cone=r  )" ;
    cin >> shape ;

    if (shape != 'a' && shape != 'c' && shape != 'r')
    {
        cout << "you have entered the wrong shape" << endl ;
    }

    else
    {
    cout << " Please enter the radius of the shape " ;
    cin >> radius ;

    cout << "Please enter the height of the shape " ;
    cin >> h ;
    }


    if (shape == 'a')
    {
        area= (4*PIE*radius*radius) ;
        volume= (4.0/3.0)*(PIE*radius*radius*radius) ;
        cout << "The Area of shape is " << area << endl ;
        cout << "The volume of the shape is " << volume << endl;
    }
    else if ( shape == 'c')
    {
        area = ((2*PIE*radius*h) + (2*PIE*radius*radius)) ;
        volume= (PIE*h*radius*radius) ;
        cout << "The Area of shape is " << area << endl ;
        cout << "The volume of the shape is " << volume << endl;
    }
    else if (shape == 'r')
    {
        area = PIE*radius*(radius+sqrt(h*h + radius*radius)) ;
        cout << "The Area of shape is " << area << endl ;
        cout << "The volume of the shape is " << volume << endl;
    }





}
