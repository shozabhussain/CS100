#include <iostream>

using namespace std;

int main()
{

    float amountdue=1 ;
    float amountrcv= 2 ;
    int change=3 ;
    int dollar= 5 ;
    int centrem= 6 ;
    int quarter= 7 ;
    int dime= 8 ;
    int nickel= 9 ;
    int centrem2=10 ;
    int centrem3= 11 ;
    int centrem4= 12 ;


    cout << "please enter the amount due in cents " ;
    cin >> amountdue ;

    cout << "please enter the amount received " ;
    cin >> amountrcv ;

    change=amountrcv-amountdue ;

    dollar=change/100 ;

    centrem= (change%100) ;

    quarter=centrem/25 ;

    centrem2= (centrem%25) ;

    dime= centrem2/10 ;

    centrem3= centrem2%10 ;

    nickel= centrem3/5 ;

    centrem4= centrem3%5 ;


    cout << "Number of dollars: " << dollar << endl;
    cout << "Number of quarters: " << quarter << endl;
    cout << "number of dime: " << dime << endl;
    cout << "number of nickels: " << nickel << endl ;
    cout << "number of pennies: " << centrem4 << endl ;












    return 0;
}

