#include <iostream>
using namespace std;

int main()
{
    int SIZE ;
    cin >> SIZE ;
    while ( SIZE >= 20)
    {
        cout << "Enter size less than 20" << endl ;
        cin.clear();
        cin >> SIZE ;
    }
    int arr[SIZE] ;
     for (int i=0; i<SIZE ; i++)
    {
        cin >> arr[i] ;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore() ;
            cout << "invalid input" << endl;
        }
    }
    int arrcoun [SIZE] ;
    for (int i=0 ;i< SIZE ; i++)
    {
        int coun=0 ;
        for (int j=0 ; j< SIZE ; j++)
        {
            if ( arr[i] == arr[j] )
            {
                coun++ ;
            }
        }
     arrcoun [i] = coun ;
    }
    int large =0 ;
    int largeindex =0 ;
     for (int i=0; i<SIZE ; i++)
    {

        if (arrcoun[i] > large)
        {
            large = arrcoun[i] ;
            largeindex= i ;
        }
    }
    cout << "most occuring " << arr[largeindex] << endl;
}
