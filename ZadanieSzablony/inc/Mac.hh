#include "Wek.hh"
#include<cmath>
using std::abs;
using std::swap;
using std::endl;
template<class TYP, int ROZMIAR>
class Macierz {
    Wektor<TYP,ROZMIAR> tab[ROZMIAR];
    public:
    Macierz();                                                                    
  Wektor<TYP,ROZMIAR> operator *(const Wektor<TYP,ROZMIAR> & skl) const;                                  
  TYP wyznacznik() const;                                                    
  Macierz  operator + (const Macierz<TYP,ROZMIAR> & skl) const;                              
  Macierz  operator - (const Macierz<TYP,ROZMIAR> & skl) const;                              
  Macierz operator * (const Macierz<TYP,ROZMIAR> & skl) const;                               
  Macierz  operator * (TYP skl) const;                                       
  bool operator == (const Macierz<TYP,ROZMIAR> & skl) const;                                 
  bool operator != (const Macierz<TYP,ROZMIAR> & skl) const;                                 
  Macierz Transponuj() const;                                                   
  const Wektor<TYP,ROZMIAR> & operator [] (int index) const;                                 
  Wektor<TYP,ROZMIAR> & operator[](int index);
};
template<class TYP,int ROZMIAR>
std::istream & operator>>(std::istream & strm,Macierz<TYP,ROZMIAR> &Mac);
template<class TYP,int ROZMIAR>
std::ostream & operator<<(std::ostream & strm,const Macierz<TYP,ROZMIAR> &Mac);