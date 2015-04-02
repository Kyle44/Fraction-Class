// Author: Kyle Fritz
// Date Modified: 4/1/15
// File: Lab6.cpp
// Description: Takes 2 args and prints out the reciprocal of it through Fraction.cpp, then sets up a default fraction, and finally
//   sets up a fraction with denominator of zero, which will produce an error.

#include <iostream>
#include <stdlib.h>
#include "Fraction.h"

using namespace std;

int main(int argc, char* argv[])
{
  //Create 3 fractions:
  //  - Take in the first fraction from the command line.
  cout < argv[1];
  cout < argv[2];
  int numerator = atoi(argv[1]);
  int denominator = atoi(argv[2]);
  Fraction fract1(numerator, denominator);

  if (denominator == 0)
    return 0;

  //    Find the reciprocal of this fraction and print it to the screen.
  Fraction fract1recip = fract1.Reciprocal(numerator, denominator);
  cout << "The reciprocal of your fraction is ";
  fract1recip.Output();

  //  - The second fraction will be created with default values. You
  //    should also print this to the screen.
  Fraction fract2;
  cout << "Fraction 2 is ";
  fract2.Output();
  //  - Then you will attempt to create a fraction with a denominator
  //    of zero, which should print an error
  Fraction fract3(3, 0);

  return 0;
}
