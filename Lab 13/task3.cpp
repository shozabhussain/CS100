#include <iostream>
using namespace std;

sort1(int a , int b)
{
    int temp ;
    if (a>b)
    {
        temp = a;
        a = b ;
        b= temp ;
    }
}
sort2( int a , int b, int c)
{
  sort1(a,b) ;
  sort1(a,c) ;
  sort1(b,c) ;
}


int main()
{
    int arr[9];
     for (int i=0; i<9 ; i++)
    {
        cin >> arr[i] ;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore() ;
            cout << "invalid input" << endl;
        }
    }


    int temp ;
    int j=0 ;
    for (int i=0; i<9 ; i++)
    {
        j=i+1 ;
        while(j<9)
        {
            while (arr[i] > arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j] ;
            arr[j] = temp ;
            j++ ;
            }
        j++ ;
        }
    }
    for (int i=0 ; i<9 ; i++)
    {
        cout << arr[i] ;

    }
    cout << endl;
   // for (int i=1 ; i<9 ; i++)
   // {
    //    arr[i]= arr[i+2];
    //}
   // for (int i=0 ; i<9 ; i++)
    //{
        cout << arr[0] << arr[2] << arr[1] << arr[4] << arr[3] << arr[6] << arr[5] << arr[8] << arr[7] ;

    //}


}
