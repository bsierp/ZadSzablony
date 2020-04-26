
#include<iostream>
#include<cmath>
#include<cstring>
/*
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
  LZespolona(): re(0), im(0) {};
  explicit LZespolona (double liczba) : re(liczba), im(0) {};                                                 
  LZespolona operator+=(const LZespolona & L2);
  LZespolona operator=(double liczba) {re = liczba; im=0; return *this;}        
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator - (LZespolona Skl1, LZespolona Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);
LZespolona operator / (LZespolona Skl1,double Skl2 );
LZespolona Sprzez(LZespolona Skl1);
double modul(LZespolona Skl1);
LZespolona utworz(double r, double i);
std::istream & operator >>(std::istream & strm, LZespolona & l);
std::ostream & operator <<(std::ostream & strm, LZespolona l);
bool operator ==(LZespolona Skl1, LZespolona Skl2);
bool operator !=(LZespolona Skl1, LZespolona Skl2);

