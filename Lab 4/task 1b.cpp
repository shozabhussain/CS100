#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a= pow((2.25*8),2) ;
    int b= sqrt(73-9) ;
    int c= (2.15+7.5-4.65);
    int d= pow(((a-b)%c),3) ;

cout << setw(45) << " 2017 Best selling Groups Digitally " << endl ;
cout << "No." << setw(7) << "Group" << "Downloads" << "songs" << endl ;
cout << "1" << "Twice" << "5,852,532" << " 29 songs"  <<endl;
cout << "2" << "BTS" << "5,740,304" << " 26 songs" <<endl;
cout << "3" << "Red Velvet" << "4,636,773" << " 23 songs" <<endl ;
cout << "4" << "Wanna One" << "3,680,632" << " 12 songs" <<endl;
cout << "5" << "EXO" << "3,242,448" << " 34 songs" <<endl;
cout << "6" << "BLACKPINK" << "3,111,018" << " 3 songs" <<endl;
cout << "7" << "MAMAMOO" << "2,750,656" << " 8 songs" <<endl;
cout << "8" << "WINNER" << "2,572,682" << " 4 songs" <<endl;



    cout << d ;
    return 0;
}
