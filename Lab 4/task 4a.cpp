#include <iostream>

using namespace std;

int main()
{
    cout << "Please type any string:" <<endl ;
    string a="fghh" ;
    cin >> a ;

    string b= a.substr(0, (a.length()/2)) ;
    string c= a.substr((a.length()/2), (a.length()/2+1)) ;
    cout << c  ;
    cout << b ;






    return 0;
}
