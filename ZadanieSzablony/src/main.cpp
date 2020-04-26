#include "Wek.hh"
using std::endl;
using std::cout;
using std::cin;
int main(){
LZespolona l=utworz(4.1,5.2);
Wektor<LZespolona,5> w1,w2;
for(int i=0;i<5;++i){
w1[i]=utworz(i+1,i+2);
w2[i]=utworz(5,5-(352+2));
}
cout<<w1<<endl<<w2<<endl;
cout<<w1+w2<<endl<<w1-w2<<endl<<w1*w2<<endl<<w1*l<<(w1==w2)<<endl<<w1.dlugosc()<<endl;
}