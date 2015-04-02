// File: Fraction.cpp
#include <iostream>
#include "Fraction.h"

Fraction::Fraction()
  : m_numerator(1), m_denominator(1)

{
  
}

Fraction::Fraction(int numerator, int denominator)
  : m_numerator(numerator), m_denominator(denominator)
{
  if (m_denominator == 0)
    {
    cout << "The denominator is 0, so this fraction won't work." << endl;
    
    }
}

Fraction Fraction::Reciprocal(const int numerator, const int denominator)
{
  Fraction recip(denominator, numerator);
  return recip;
}

void Fraction::Output()
{
  cout << m_numerator << "/" << m_denominator << endl;
}
