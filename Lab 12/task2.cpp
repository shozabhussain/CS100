#include <iostream>
#include <cmath>
using namespace std;

string reverse(string str)
{
    int l=str.length() ;
    if (l<1)
    {
        return "" ;
    }
    else
    {
        return str.substr(l-1,1) + reverse(str.substr(0,l-1)) ;
    }
}

string converter(int a)
{
    string one= "1" ;
    string zero= "0" ;
    cout << a << endl;
    if (a==1)
    {
        cout<<"end";
        cout<<one<<endl;
        return "1";
    }
    else if (a%2 == 0)
    {
        cout << a/2 ;
        cout<<zero<<endl;
       return zero + converter(a/2) ;
    }
    else if (a%2 +10 != 0)
    {
        cout << a/2 ;
         cout<<one<<endl;
       return one + converter(a/2) ;
    }

}
int main ()
{
    int x = 0 ;
    cin >> x ;
    string r= converter(x) ;
    cout<< reverse(r) ;

}
