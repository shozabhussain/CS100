#include <iostream>

using namespace std ;

int main ()
{
    string a ;
    cout << "enter a phrase or a sentence" << endl ;
    getline (cin ,a) ;
    int w= 1;
    int v=0 ;

string b= a.substr (0,1) ;
int l= a.length() ;

for (int i=0 ; i<l ; i++)
{
    string b= a.substr (i,1) ;
    if (b == " ")
    {
        w++ ;
    }

    if (b== "a" || b=="e" || b=="i" || b=="o" || b=="u")
    {
        v++ ;
    }
}
cout << "no of words=" << w << endl;
cout << "no of vowels=" << v << endl ;

}
