#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double pie=3.1415;

cout << "..." <<setw(10) <<fixed <<setprecision(0) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(1) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(2) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(3) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(4) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(5) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(6) <<pie << "..." << endl ;
cout << "..." <<setw(10) <<fixed <<setprecision(7) <<pie << "..." << endl ;
cout << "..." <<setw(0) <<fixed <<setprecision(8) <<pie << "..." << endl ;
    return 0;
}
