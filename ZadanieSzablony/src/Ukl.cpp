#include"Ukl.hh"
template<class TYP,int ROZMIAR>
UkladRownanLiniowych<TYP,ROZMIAR>::UkladRownanLiniowych(){
    Macierz<TYP,ROZMIAR> M;
    Wektor<TYP,ROZMIAR> W;
    A=M;
    b=W;
}
template<class TYP,int ROZMIAR>
Wektor<TYP,ROZMIAR> UkladRownanLiniowych<TYP,ROZMIAR>::rozwiaz() const{
    TYP epsilon(0.0000001);
    Wektor<TYP,ROZMIAR> wynik;
    Macierz<TYP,ROZMIAR> trans=this->A.Transponuj();
    if((abs(this->A.wyznacznik())<abs(epsilon))){
        cerr<<"Uklad nie jest ukladem cramera"<<endl;                               
    exit(1);                                                                    
    }
     for(int i=0;i<ROZMIAR;++i){                                                 
       trans[i]=this->b;                                                        
       wynik[i]=trans.wyznacznik()/this->A.wyznacznik();                        
       trans[i]=this->A.Transponuj()[i];                                        
    }                                                                           
    return wynik;         
}
template<class TYP,int ROZMIAR>
UkladRownanLiniowych<TYP,ROZMIAR>::UkladRownanLiniowych(const Macierz<TYP,ROZMIAR> & M, const Wektor<TYP,ROZMIAR> & W){
    A=M;
    b=W;
}
template<class TYP,int ROZMIAR>
const Wektor<TYP,ROZMIAR> & UkladRownanLiniowych<TYP,ROZMIAR>::zwroc_wektor_wolny() const{
    return this->b;
}
template<class TYP,int ROZMIAR>
const Macierz<TYP,ROZMIAR> & UkladRownanLiniowych<TYP,ROZMIAR>::zwroc_macierz_glowna() const{
    return this->A;
}
template<class TYP,int ROZMIAR>
void UkladRownanLiniowych<TYP,ROZMIAR>::zmien_wektor_wolny(const Wektor<TYP,ROZMIAR> & W){
    this->b=W;
}
template<class TYP,int ROZMIAR>
void UkladRownanLiniowych<TYP,ROZMIAR>::zmien_macierz_glowna(const Macierz<TYP,ROZMIAR> & M){
    this->A=M;
}
template<class TYP,int ROZMIAR>
std::istream & operator>>(std::istream &Strm,UkladRownanLiniowych<TYP,ROZMIAR> &UklRown){
Macierz<TYP,ROZMIAR> Mpom;
Wektor<TYP,ROZMIAR> Wpom;
Strm>>Mpom>>Wpom;
 UklRown.zmien_macierz_glowna(Mpom.Transponuj());                        
        UklRown.zmien_wektor_wolny(Wpom);                                       
      return Strm;
}
template<class TYP,int ROZMIAR>
std::ostream & operator<<(std::ostream & Strm,const UkladRownanLiniowych<TYP,ROZMIAR> &UklRown){
     for(int i=0;i<ROZMIAR;i++){                                                 
        if(i!=ROZMIAR/2)                                                        
    Strm<<'|'<<UklRown.zwroc_macierz_glowna()[i]<<"||x_"<<i+1<<"| |"<<UklRown.zwroc_wektor_wolny()[i]<<'|'<<endl;                                              
    if(i==ROZMIAR/2)                                                            
    Strm<<'|'<<UklRown.zwroc_macierz_glowna()[i]<<"||x_"<<i+1<<"|=|"<<UklRown.zwroc_wektor_wolny()[i]<<'|'<<endl;                                              
    }                                 
}