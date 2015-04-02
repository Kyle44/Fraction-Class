// File: Fraction.h
#ifndef FRACTION_H
#define FRACTION_H

#include <string>

using namespace std;

class Fraction {
 public:
  // Constructors
  Fraction();
  Fraction(int numerator, int denominator);

  // input: numerator and denominator
  // output: A fraction
  void Output();

  // input: Numerator and denominator
  // output: Denominator over numerator
  Fraction Reciprocal(int numerator, int denominator);

 private:
  int m_numerator;
  int m_denominator;

};


#endif

