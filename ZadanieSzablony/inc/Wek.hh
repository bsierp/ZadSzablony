#ifndef WEK_HH
#define WEK_HH
#include "LZespolona.hh"
#include <iostream>
using std::cerr;
using std::endl;
template<class TYP, int ROZMIAR>
class Wektor{
    TYP tab[ROZMIAR];
    public:
    Wektor();
    const TYP & operator[](int index) const;
    TYP & operator[](int index);
    Wektor operator+(const Wektor<TYP,ROZMIAR> & W2) const;
    Wektor operator-(const Wektor<TYP,ROZMIAR> & W2) const;
    TYP operator*(const Wektor<TYP,ROZMIAR> & W2) const;
    Wektor operator*(TYP skl) const;
    bool operator==(const Wektor<TYP,ROZMIAR> & W2) const{
        TYP epsilon=0.00000000001;
for(int i=0;i<ROZMIAR;i++){                                               
      if(!(abs(this->tab[i]-W2[i])<epsilon))
      return false;
}
     return true; 
}
    bool operator!=(const Wektor<TYP,ROZMIAR> & W2) const;
    double dlugosc() const{
         return sqrt(*this * *this);
    }
};
template<>
bool Wektor<LZespolona,5>::operator==(const Wektor<LZespolona,5> & W2) const;
template<>
double Wektor<LZespolona,5>::dlugosc() const;
template<class TYP, int ROZMIAR>                                                
std::istream & operator>>(std::istream & strm, Wektor<TYP,ROZMIAR> & W);
template<class TYP, int ROZMIAR>          
std::ostream & operator<<(std::ostream & strm,const Wektor<TYP,ROZMIAR> & W);
#endif