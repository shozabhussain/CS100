#include <iostream>
using namespace std ;

string divide(string&a , string&output)
{
    int l= a.length() ;
    for (int j=1 ; j<=l ; j++)
    {
        for (int i=0 ; i<=l-j ; i++)
        {

            output= output + " " + a.substr(i,j) ;

        }
    }
    return output;
}

int main()
{
    string x ;
    string b ;
    cin >> x ;
    cout << divide(x, b) << endl ;

}
