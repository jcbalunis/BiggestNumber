//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int number1;
int number2;
int biggest;

  std::cout<<"Please enter a whole number:\n";
  std::cin>> number1;
  std::cout<<"Please enter another whole number:\n";
  std::cin>> number2;



    if (number1 > number2)
    { 
    biggest = number1;
    }
    else
    {
    biggest = number2;
    }

  std::cout<<"Of those two numbers, the biggest is: ";
  std::cout<< biggest;
  std::cout<<endl<<"Thank you for playing.\n";

  return 0;
}
