#include <iostream>
using namespace std ;

void checkingString( string a)
{
    int l=a.length();
    bool pal= true ;
    for (int i =0 ; i<l ; i++)
    {
    if (a.substr(i,1) != a.substr(l-i-1,1))
    {
        pal= false ;
        cout << "number is not plindrome " << endl;
        break ;
    }
    }
    if (pal == true)
    {
        cout << "it is palindrome " << endl;
    }
}
int main()
{
    string x ;
    cin>> x ;
    checkingString(x) ;
    return 0;
}
