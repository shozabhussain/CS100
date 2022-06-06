#include <iostream>
#include <iomanip>
using namespace std;

void highest(int temperature[5][7] , int arrh [5])
{
    for (int i=0 ; i<5 ; i++)
    {
        for (int j=0 ; j<7 ; j++)
        {
            if (temperature[i][j] > arrh[i] )
            {
                arrh[i] = temperature[i][j] ;
            }

        }
    }
}
int main()
{
    string cities[] = { "karachi" , "lahore" , "Quetta" , "Islamabad" , "peshawar" } ;
    const int COLUMNS= 7 ;
    int temperature [5][COLUMNS] = {

    { 35, 40, 34, 32, 31, 37, 36},
    { 35, 45, 34, 43, 41, 46, 36},
    { 37, 41, 40, 39, 38, 35, 30},
    { 33, 31, 37, 35, 42, 40, 38},
    { 32, 41, 29, 28, 30, 31, 32},

    } ;
    for (int i=0 ; i<5 ; i++)
    {
        for (int j=0 ; j<COLUMNS ; j++)
        {
            cout << temperature[i][j] << " " ;
        }
        cout << endl;
    }

    int arrh[5] = {} ;
    highest(temperature, arrh) ;

    for (int k=0 ; k<5 ; k++)
    {
        cout << setw(9) << cities[k] << setw(8) << arrh[k] << endl;
    }

    cout << temperature [4][0] ;



}
