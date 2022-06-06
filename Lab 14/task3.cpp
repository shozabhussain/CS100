#include <iostream>
using namespace std;

void func(int arr[] , int SIZE , int even[] )
{
    for (int i=0 ; i<SIZE ; i++ )
    {
        if ((arr[i])%2 == 0 )
        {
            even[i] = arr[i] ;
        }
    }
}
int main()
{
    cout << "enter the size of array" << endl;
    int SIZE=0;
    cin >> SIZE ;
    int arr[SIZE] ;

    for (int i=0 ; i<SIZE ; i++)
    {
        cin >> arr[i] ;
    }


    int even[SIZE] ;
    for (int i=0 ; i<SIZE ; i++)
    {
        even[i] = 0 ;
    }

    func (arr , SIZE , even) ;

    cout << "Even { " ;

     for (int i=0 ; i<SIZE ; i++)
    {
        if (even[i] !=0)
        {

            cout << even[i] << " , " ;
        }
    }
    cout << " }" ;

}
