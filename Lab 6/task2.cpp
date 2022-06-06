#include <iostream>

using namespace std ;

int main ()
{
    cout << " please answer only in terms of YES and NO " << endl ;
    cout << "Are all sides equal " << endl ;
    string input1= "yes" ;
    cin >> input1 ;
    if (input1 != "yes" && input1 != "no")
    {
        cout << "invalid input" << endl;
        return 1;
    }
    bool side = false ;

    cout << "Are opposite sides equal " << endl ;
    string input2= "yes" ;
    cin >> input2 ;
    if (input2 != "yes" && input2 != "no")
    {
        cout << "invalid input" << endl;
        return 1;
    }
    bool oppside= false ;

    cout << "Are all angles 90 degrees " << endl ;
    string input3 = "yes" ;
    cin >> input3 ;
    if (input3 != "yes" && input3 != "no")
    {
        cout << "invalid input" << endl;
        return 1;
    }
    bool angle= false ;

    if (input1 =="yes" && input2== "yes" && input3== "yes")
    {
        side= true ;
        angle= true ;
        oppside= true ;
    }
    else if (input1 =="no" && input2== "yes" && input3== "yes")
    {
        oppside= true ;
        angle= true ;
    }
    else if (input1 =="yes" && input2== "yes" && input3== "no")
    {
        side= true ;
        oppside= true ;
    }
    else if (input1 =="no" && input2== "yes" && input3== "yes")
    {
        oppside= true ;
        angle= true ;
    }

    if ( side && oppside && angle)
    {
        cout << "the shape is square" << endl;
    }
    else if (oppside && angle)
    {
        cout << "the shape is rectangle" << endl;
    }
    else if (side && oppside)
    {
        cout << "the shape is rhomboid" << endl ;
    }
    else if (side && oppside)
    {
        cout << "the shape is rhombus" << endl ;
    }
    else
    {
        cout << "no such shape exist" ;
    }








}
