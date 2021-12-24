#include "Fraction.h"

Fraction::Fraction(int num=0, int den=1)
{
    numerator = num;
    denominator = den;
    normalForm();
}





int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}
Fraction operator+(Fraction fractionX, Fraction fractionY)
{
    Fraction fractionZ(( (fractionX.numerator * fractionY.denominator) + (fractionY.numerator * fractionX.denominator) ),(fractionX.denominator* fractionY.denominator) )  ;
   // fractionZ.numerator = ( (fractionX.numerator * fractionY.denominator) + (fractionY.numerator * fractionX.denominator) );
   // fractionZ.denominator = (fractionX.denominator* fractionY.denominator);
    fractionZ.normalForm();
    return fractionZ;
    
     
}

Fraction operator-(Fraction a, Fraction b)
{
    Fraction c;
    c.numerator = a.numerator*b.denominator - b.numerator*a.denominator;
    c.denominator = a.denominator*b.denominator;
    c.normalForm();
    return c;
}

Fraction operator*(Fraction a, Fraction b)
{
    Fraction c;
    c.numerator = a.numerator*b.numerator;
    c.denominator = a.denominator*b.denominator;
    c.normalForm();
    return c;
}

Fraction operator/(Fraction a, Fraction b)
{
    Fraction c;
    c.numerator = a.numerator*b.denominator;
    c.denominator = a.denominator*b.numerator;
    c.normalForm();
    return c;
}

bool operator==(Fraction a, Fraction b)
{
    return (a.numerator == b.numerator && a.denominator == b.denominator);
}


void Fraction::normalForm()
{
    if(denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
    int temp;
    if(numerator < 0)
    {
        temp = -numerator;
    }
    else
    {
        temp = numerator;
    }
    if(temp > denominator)
    {
        temp = denominator;
    }
    while(temp > 1)
    {
        if((numerator % temp == 0) && (denominator % temp == 0))
        {
            numerator /= temp;
            denominator /= temp;
        }
        temp--;
    }
}

ostream& operator<<(ostream& outputStream, Fraction myFraction)
{
    outputStream << myFraction.getNumerator() << " ";
    int temp = myFraction.getDenominator();
    if(temp > 1)
    {
        outputStream << "/ " << temp;
    }
}