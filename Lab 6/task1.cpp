#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    string code= "shozi" ;
    cout << "Please enter a 5-character code " << endl ;
    cin >> code ;

    if (code.length() !=5)
    {
        cout << "please enter the correct length" <<endl ;
        return 1;
    }
    else if (code.substr(1,1)== "a" || code.substr(1,1)== "e" || code.substr(1,1)== "i" || code.substr(1,1)== "o" || code.substr(1,1)== "u")
    {
        code= code.substr(0,1) + "_" + code.substr(2,3) ;
    }
    if (code.substr(3,1)== "a" || code.substr(3,1)== "e" || code.substr(3,1)== "i" || code.substr(3,1)== "o" || code.substr(3,1)== "u")
    {
        code= code.substr(0,3) + "_" + code.substr(4,1) ;
    }
    cout << code ;

}
