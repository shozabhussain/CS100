#include <iostream>

using namespace std;

int main ()
{
    string product ;
    float price=0 ;
    float number=0 ;
    float totalbill= 0 ;
    char res = 'y' ;
    float totalprice= 0 ;

    do
    {

    cout << "Please enter the name of the product " << endl ;
    cin >> product ;


    cout << "Please enter the price per piece " << endl;
    cin >> price ;
    if (cin.fail())
    {
        cin.clear() ;
        string garbage ;
        //getline ( cin, garbage) ;
        cout << "wrong input " << endl ;
        continue ;
    }

    cout << "please enter the amount of product " << endl;
    cin >> number ;

    if (cin.fail())
    {
        cin.clear() ;
        string garbage2 ;
        //getline ( cin, garbage2) ;
        cout << "wrong input " << endl ;
        continue ;
    }
    totalprice= price*number ;

    cout << " Bill up till now " << endl ;
    cout << "product              " << "price per piece       " << "quantity     " << "total price     " << endl ;
    cout << product << "                   " << price << "                "  << number << "            " << totalprice << endl ;

    totalbill = totalbill+totalprice ;

     cout <<  "Do you want to add another product ( Press Y for yes and N for no )" << endl ;
    cin >> res ;

    if ( res == 'n')
    {
          cout << "total bill = " << totalprice ;
          continue ;
    }


    if (res != 'n' && res != 'y')
    {
        cout << "wrong input" << endl ;
        res='y';
        continue ;
    }


    }
    while (res == 'y') ;

        // cout << "total bill = " << totalprice ;


}

cout << "Please enter number 2 " << endl ;
    cin >> num2 ;
    if ( cin.fail())
    {
        cout << "wrong input" << endl ;
        return 0 ;
    }
    int i=1 ;
    int rem1=0 ;

    while (i<=num1)
    {

    rem1= num1%i ;

    if (rem1 == 0)
    {
        cout << "Factors of number 1 " << endl ;
        cout << i << endl ;
    }
      i++ ;
    }

    int p=1 ;
    int rem2=0 ;

    while (p<=num2)
    {

    rem2= num2%p ;

    if (rem2 == 0)
    {
        cout << "Factors of number 2 " << endl ;
        cout << p << endl ;
    }
     p++ ;
    }



}

