#include <iostream>
using namespace std;

void revstring(string&a , string&b)
{
    int l= a.length();
    for (int i=0 ; i<=l ; i++)
    {
    b= b + a.substr(l-i, 1) ;
    }
}

int main()
{
    string x ;
    string y ;

    while (x != "q" )
    {
        cin >> x ;
        revstring(x,y) ;
        if(y == "q")
        {
            cout << "finish " << endl ;
        }
        else
        {
        cout << y << endl;
        y= "" ;
        }
    }
}
