#include <iostream>
using namespace std;

int main()
{
    int arr[15] ;
    for (int i=0; i<15 ; i++)
    {
        cin >> arr[i] ;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore() ;
            cout << "invalid input" << endl;
        }
    }
    int sum=0 ;
    double avg=0 ;
    for (int i=0; i<15 ; i++)
    {
        sum=sum+arr[i] ;
    }
    avg = sum/15.0 ;
    cout << "Average :" << avg <<endl;
    int small= arr[0] ;
    int large= arr[0] ;
    for (int i=0; i<15 ; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i] ;
        }
        if (arr[i] > large)
        {
            large = arr[i] ;
        }
    }
    cout << "sum :" << sum ;
    cout << "large :" << large << endl;
    cout<< "small :" << small << endl;
}
