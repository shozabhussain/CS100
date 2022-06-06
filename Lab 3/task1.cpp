#include <iostream>

using namespace std;

int main()
{
    char VAR1= 'm' ;
    char VAR2= 'n' ;
    char VAR3= 'r' ;
    char VAR4= 'g' ;
    char VAR5= 'j' ;
    char VAR6= 'k' ;


    cout << "please enter any 3 characters" << endl;
    cin >> VAR1  ;
    cin >> VAR2  ;
    cin >> VAR3 ;

    VAR4=VAR1 ;
    VAR1=VAR2 ;
    VAR2= VAR4 ;
    VAR5= VAR2 ;
    VAR2 = VAR3 ;
    VAR3 =VAR5 ;
    VAR6= VAR3 ;
    VAR3= VAR4 ;





    cout << VAR1 << endl ;
    cout << VAR2 << endl ;
    cout << VAR3 << endl ;


    return 0;
}
