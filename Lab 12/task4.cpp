#include <iostream>
using namespace std ;

int factorial(int n)
{
    if (n > 1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int nCr(int n , int r)
{
  return (factorial(n))/(factorial(r)*factorial(n-r)) ;
}
int nPr ( int n , int r)
{
    return (factorial(n))/factorial(n-r) ;
}
int main ()

{
     string input ;
    do
    {
  cout << "enter P,C,Q" << endl;
  cin >> input ;
  int n ;
  int r ;
  if ( input != "p" && input != "c" && input != "q")
  {
      cout << "wrong input " << endl;
  }
  if (input == "q")
  {
      cout << "quitting program" << endl ;
      return 0 ;
  }
  if (input == "p")
  {
      cout << "enter n" ;
      cin >> n ;
      if (n <0)
      {
          cout << "Please enter n that is greater than 0" ;
          break ;
      }
      cout << "enter r" ;
      cin >> r ;
      if (r <0 || r>n)
      {
          cout << "Please enter r that is greater than 0" ;
          break ;
      }
      cout << n << "P" << r << ": " << nPr(n,r) << endl  ;
  }
   if (input == "c")
  {
      cout << "enter n" ;
      cin >> n ;
      if (n <0)
      {
          cout << "Please enter n that is greater than 0" ;
          break ;
      }
      cout << "enter r" ;
      cin >> r ;
      if (r <0 || r>n)
      {
          cout << "Please enter r that is greater than 0" ;
          break ;
      }
      cout << n << "C" << r << ": " << nCr(n,r) << endl  ;
  }
    }
    while (input !="q") ;

  }

