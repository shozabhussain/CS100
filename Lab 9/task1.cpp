#include <iostream>

using namespace std ;

int  main ()
{
    int i=1, j=1 ,a=1;
    int h ;
    cout << "enter the height " << endl ;
    cin >> h ;

        for(int i=1; i<=h; i++)
        {
            for (a=1; a<=((h*2 +1/2) -i) ; a++ )
            {
                cout << " " ;
            }
            for(j=1 ; j<= i; j++)
            {
            cout << i  ;
            cout<< " " ;

            }

        cout << endl;
        }















    return 0 ;
}
