#include <iostream>
using namespace std ;

int main()
{
    string arr[5] ;
     for (int i=0; i<5 ; i++)
    {
        cin >> arr[i] ;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore() ;
            cout << "invalid input" << endl;
        }
    }
    int arrl [5];

    for (int i=0 ; i<5 ; i++)
    {
        arrl[i] = arr[i].length();
        cout << arr[i] << "  " << arrl[i] << endl;
    }
    string s1 ;
    string s2 ;
    cout << "string to search " << endl;
    cin >> s1;
    cout << "String to replace" << endl;
    cin >> s2 ;

    for (int i=0 ; i<5 ; i++)
    {

        if (s1 == arr[i])
        {
            arr[i] = s2 ;
        }
        else
        {
            cout<< "target not found " ;
            return 0 ;
        }
    }
     for (int i=0 ; i<5 ; i++)
    {
        arrl[i] = arr[i].length();
        cout << arr[i] << "    " << endl;
    }




}
