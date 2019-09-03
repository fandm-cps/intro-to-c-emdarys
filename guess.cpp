#include <stdio.h> //These are C libraries
//#include <cstdio> //Can use this also
#include <stdlib.h>
#include <iostream> //to use cout an cin

int main()
{
  int theNumber = 10; // the saved number
  int aNumber;
  std::cout << "Guess the number: " << std::endl;
  std::cin >> aNumber; //saving the number into the variable

  // how to check for an alphabet or special symbol.
  // if/while(!(isdigit(aNumber))){}

   while(aNumber != theNumber){  // || !(isdigit(aNumber))){ 
          std::cout << "Guess the number again: " << std::endl;
          std::cin >> aNumber;
  }
  

  std::cout << "Correct" << std::endl;

  return 0;
}
