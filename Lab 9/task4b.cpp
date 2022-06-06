#include <iostream>

using namespace std;

int main()
{
    int n= 0 ;
    cout << "enter n" ;
    cin >> n;

    for (int i=0 ; i<n ; i++)
    {
        int l=0 ;
        for (int a=0 ; a<2*i ; a++)
        {
            cout << " " ;
        }
        for (int b=0 ; b<n-i ; b++)
        {
            cout << "*" ;
        }
        cout << endl;

    }
    for (int i=1; i<n ; i++)
    {
        for (int a=0 ; a<2*(n-i)-1 ; a++)
        {
            cout << " " ;
        }
        for (int b=0 ; b<i+1 ; b++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0 ;
}



