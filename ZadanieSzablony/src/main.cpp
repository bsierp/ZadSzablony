#include "Ukl.hh"
#include <fstream>
#include <string>
#include <iomanip>
using std::string;
using std::endl;
using std::cout;
using std::cin;
int main(){
    char typ;
    UkladRownanLiniowych<LZespolona,5> UklZ;
/*LZespolona l=utworz(4.1,5.2);
Wektor<LZespolona,5> w1,w2;
for(int i=0;i<5;++i){
w1[i]=utworz(i+1,i+2);
w2[i]=utworz(5,5-(352+2));
}
cout<<w1<<endl<<w2<<endl;
cout<<w1+w2<<endl<<w1-w2<<endl<<w1*w2<<endl<<w1*l<<(w1==w2)<<endl<<w1.dlugosc()<<endl;*/
//Macierz<LZespolona,5> M,R;
std::fstream plik;
string nazwa;
cin >>nazwa;
plik.open(nazwa);
plik>>typ;
if(typ=='r'){
 UkladRownanLiniowych<double,5> Ukl;
 Wektor<double,5> Blad;
 plik>>Ukl;
 cout<<"Uklad Rownan:"<<endl<<std::fixed<<std::setprecision(2)<<Ukl<<endl;
  cout<<"Rozwiazaniem rownania jest:"<<endl;                                    
  for(int i=0;i<5;++i){                                                   
    cout<<"x_"<<i+1<<'='<<Ukl.rozwiaz()[i]<<endl;}
    Blad=(Ukl.zwroc_macierz_glowna()*Ukl.rozwiaz()-Ukl.zwroc_wektor_wolny());
    cout<<"Wektor bledu:"<<std::scientific<<Blad<<endl;
    cout<<"Dlugosc wektora bledu:"<<Blad.dlugosc()<<endl;                          
}
else if(typ=='z'){
    UkladRownanLiniowych<LZespolona,5> Ukl;
    Wektor<LZespolona,5> Blad;
    plik>>Ukl;
 cout<<"Uklad Rownan:"<<endl<<std::fixed<<std::setprecision(2)<<Ukl<<endl;
  cout<<"Rozwiazaniem rownania jest:"<<endl;                                    
  for(int i=0;i<5;++i){                                                   
    cout<<"x_"<<i+1<<'='<<Ukl.rozwiaz()[i]<<endl;}
    Blad=(Ukl.zwroc_macierz_glowna()*Ukl.rozwiaz()-Ukl.zwroc_wektor_wolny());
    cout<<"Wektor bledu:"<<std::scientific<<Blad<<endl;
    cout<<"Dlugosc wektora bledu:"<<Blad.dlugosc()<<endl; 
}
else{
    cerr<<"Nie podano wlasciwego typu ukladu rownan na poczatku pliku"<<endl;
    exit(1);
}
/*cout<<R;
for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
        R[i][j]=utworz(i+j,i-j);
    }
}
cout<<M<<endl<<R<<endl<<M+R<<M-R<<M*R<<M<<endl<<R<<(M!=R)<<endl;
cout<<M<<endl<<M.Transponuj()<<endl<<M.wyznacznik()<<endl;*/
}