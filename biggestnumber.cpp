//Author: Trevor Owens
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int wholeNumber;
int wholeNumber2;
int biggestNumber;

  cout<<"Please enter a whole number:\n";
  
  cin >> wholeNumber;

  cout<<"Please enter another whole number:\n";

  cin >> wholeNumber2;

if (wholeNumber > wholeNumber2)
{
biggestNumber = wholeNumber;
}
else 
{
biggestNumber = wholeNumber2;
}

cout<<"Of those two numbers, the biggest is: ";

  cout << biggestNumber;

  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
