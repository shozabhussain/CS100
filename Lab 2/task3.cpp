#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    cout << "This Program will calculate the Area and Perimeter of any rectangle " << endl;

    int L;
    int W;

    cout << "Length of Rectangle" ;
    cin >> L ;

    cout << "Width of rectangle" ;
    cin >> W ;

    cout << "Area of Rectangle is " << L*W << " cm^2" << endl;

    cout << "Perimeter of Rectangle is " << L+L+W+W << " cm " << endl;

    cout << "Length of Diagonal is " << sqrt( (L*L)+(W*W) ) << " cm " ;


    return 0;
}
