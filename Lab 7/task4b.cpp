 if (res == "withdraw")
    {
        cout << "enter the amount you want to withdrawal" << endl ;
        cin >> withdrawal ;
        if ((withdrawal%500) != 0 )
        {
            cout << "Please enter the withdrawal amount in the multiple of 500 " <<endl ;
            continue ;
        }
        else if (withdrawal<0)
        {
            cout << "Please enter a positive number" << endl;
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

