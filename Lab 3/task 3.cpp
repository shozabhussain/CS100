#include <iostream>

using namespace std;

int main()
{

    float hotdog= 2.5 ;
    float drink= 1.25 ;
    float extrasauce= 0.5 ;
    float extrameat= 1.25 ;

    float nohotdog= 1 ;
    float nodrink= 2 ;
    float noextrasauce= 3;
    float noextrameat= 4;

    cout << "please enter the quantity for each item" << endl;
    cout << "hotdog" " " ;
    cin >> nohotdog ;

    cout << "drink" " " ;
    cin >> nodrink ;

    cout << "extrasauce" " " ;
    cin >> noextrasauce ;

    cout << "extrameat" " " ;
    cin >> noextrameat ;

    float bill1= ((hotdog)*(nohotdog) + (drink)*(nodrink) + (extrasauce)*(noextrasauce) + (extrameat)*(noextrameat)) ;

    float bill2=1.13*bill1 ;

    cout << "price for " << nohotdog << " hotdogs=" << " " << nohotdog*hotdog << endl ;
    cout << "price for " << nodrink << " drink=" << " " << nodrink*drink << endl ;
    cout << "price for " << noextrasauce << " extrasauce=" << " " << noextrasauce*extrasauce << endl ;
    cout << "price for " << noextrameat << " extrameat=" << " " << noextrameat*extrameat << endl ;

    cout << "Your Bill including 13% GST is:" << " " << bill2 << "$" << endl;









    return 0;
}
