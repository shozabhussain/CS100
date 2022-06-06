#include <iostream>
using namespace std;

int orderingNumber(int a, int b, int c)
{
    int smallest= 0 ;
    int middle= 6 ;
    int largest=8;
    if( a< b && a<c)
    {
        smallest = a ;
    }
    else if (a>b && a>c)
    {
        largest = a ;
    }
    else
    {
        middle = a ;
    }
    if (b>a && b>c)
    {
        largest = b ;
    }
    else if( b<c && b<a)
    {
        smallest = b ;
    }
    else
    {
        middle = b ;
    }
    if( c< b && c<a)
    {
        smallest = c ;
    }
    else if (c>b && c>a)
    {
        largest = c ;
    }
    else
    {
        middle = c ;
    }

    cout << smallest << middle << largest<< endl;
    return 0 ;
}
int main ()
{
    int x , y, z ;
    cin>> x >> y >> z ;
    if(cin.fail())
    {
        cout << "invalid input" << endl ;
        return 0 ;
    }
    orderingNumber(x ,y ,z) ;
    return 0 ;
}
















