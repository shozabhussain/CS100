#include <iostream>
#include <string>
using namespace std ;

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
int main()
{
    string x ;
    getline(cin,x);
    cout << reverse(x) ;
}
