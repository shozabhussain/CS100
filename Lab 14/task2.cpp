#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of bars in the graph" << endl;
    int bar =5 ;
    cin >> bar  ;
     int h[bar]  ;
    for (int i=0 ; i<bar ; i++)
    {
     cout << "Enter the height of bar" << i << "(max 10)" ;
     cin >> h[i] ;
     if ( h[i] >10)
     {
         cout << "Value should be less than 10" << endl;
         h[i]= 0 ;
         continue ;
     }
    }
   // cout << "Enter the height of bar 1 ( max 10)" ;
   // cin >> h[0] ;
   // cout << h[0] ;
    //cout << "Enter the height of bar 2 ( max 10)" ;
    //cin >> h[1] ;
    //cout << h[0] ;
    //cout << "Enter the height of bar 3 ( max 10)" ;
    //cin >> h[2] ;
    //cout << h[0] ;
    //cout << "Enter the height of bar 4 ( max 10)" ;
    //cin >> h[3] ;
    //cout << h[0] ;
    //cout << "Enter the height of bar 5 ( max 10)" ;
    //cin >> h[4] ;
    //cout << h[0] ;

    char graph[10][bar] ;
    for (int i=0 ; i<10 ; i++)
    {
        for (int j=0 ; j<bar ; j++)
        {
            graph[i][j] = 0 ;
        }
    }

    for (int j=0 ; j<bar ; j++)
    {
        //cout << 10-h[j] ;
        for (int i=9 ; i>=(10-h[j]) ; i--)
        {

            graph[i][j] = 'x' ;


        }
    }

    for (int i= 0 ; i<10 ; i++)
    {
        for (int j =0 ; j<bar ; j++)
        {
            cout << graph[i][j] ;
        }
        cout << endl;
    }
}
