#include <iostream>
using namespace std ;

void printTriangle(int a)
{
    for (int i=0 ; i<=a ; i++)
    {
        for (int j=a-i; j>0 ; j--)
        {
            cout << " " ;
        }
        for (int k=0 ; k<=i ; k++)
        {
            cout << "* " ;
        }
        cout<< endl ;
    }
}
int main()
{
    int x;
    cin>> x ;
    if (cin.fail())
    {
        cout << "invalid input" ;
        return 0 ;
    }
    for (int h=1; h<=5 ; h++)
    {
        printTriangle(h) ;
    }
    return 0;
}


