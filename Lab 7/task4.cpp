#include <iostream>

using namespace std ;

int main()
{
    float prevbal=15000 ;
    string res = "withdraw" ;
    int withdrawal=0 ;
    float rembal = 15000 ;
    float bankcharg= 0 ;
    float totalwithdraw= 0 ;

    while (res == "withdraw" || res == "check")
    {

    cout << " 1) Enter 'check' if you want to check your bank balance " << endl;
    cout << " 2) Enter 'withdraw' if you want to make a cash withdrawal " << endl ;
    cout << " 3) Enter 'quit' if you want to end transaction and quit the program " << endl ;

    cin >> res ;

    if (res == "withdraw")
    {
        cout << "enter the amount you want to withdrawal" << endl ;
        cin >> withdrawal ;

         if (withdrawal<0)
        {
            cout << "Please enter a positive number" << endl;
        }
        else if ((withdrawal%500) != 0 )
        {
            cout << "Please enter the withdrawal amount in the multiple of 500 " <<endl ;
            continue ;
        }

        else if ((withdrawal+bankcharg)>prevbal)
        {
            bankcharg = bankcharg + 18.75 ;
            cout << "You don't have enough balance " << endl ;
        }
        else
        {
            totalwithdraw= totalwithdraw + withdrawal ;
            bankcharg = bankcharg + 18.75 ;
            rembal = prevbal - (totalwithdraw+bankcharg) ;
            cout << "Withdrawal successful " << endl ;
        }
    }
    else if (res == "check")
    {
        cout << "your balance is " << prevbal  << endl;
    }
    else if ( res == "quit")
    {
        cout<< "previous balance \t" << prevbal << endl;
        cout << "total cash withdrawn \t " << totalwithdraw << endl ;
        cout << "total bank charges \t" << bankcharg << endl;
        cout << "remaining balance \t"  << rembal << endl;
        cout << "interest earned \t" << 0.03*rembal << endl ;
        cout << "new balance      \t" << 1.03*rembal ;
    }
    else
    {
          cout << "invalid input" << endl ;
          res="check";
    }

    }


    }










