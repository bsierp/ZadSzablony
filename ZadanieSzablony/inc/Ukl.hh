#include"Mac.hh"
using std::cerr;
template <class TYP,int ROZMIAR>
class UkladRownanLiniowych{
    Macierz<TYP,ROZMIAR> A;
    Wektor<TYP,ROZMIAR> b;
    public:
    Wektor<TYP,ROZMIAR> rozwiaz() const;
    UkladRownanLiniowych();
    UkladRownanLiniowych(const Macierz<TYP,ROZMIAR> & M, const Wektor<TYP,ROZMIAR> & W);                    
  const Wektor<TYP,ROZMIAR> & zwroc_wektor_wolny() const;                                    
  void zmien_wektor_wolny(const Wektor<TYP,ROZMIAR> & W);                                    
  const Macierz<TYP,ROZMIAR> & zwroc_macierz_glowna() const;                                 
  void zmien_macierz_glowna(const Macierz<TYP,ROZMIAR> & M);                                 
};
template<class TYP,int ROZMIAR>
std::istream & operator>>(std::istream &Strm,UkladRownanLiniowych<TYP,ROZMIAR> &UklRown);
template<class TYP,int ROZMIAR>
std::ostream & operator<<(std::ostream &Strm,const UkladRownanLiniowych<TYP,ROZMIAR> &UklRown);