#include"Mac.cpp"
template class Macierz<double,5>;
template class Macierz<LZespolona,5>;
template std::istream & operator>>(std::istream & strm,Macierz<double,5> &Mac);
template std::ostream & operator<<(std::ostream & strm,const Macierz<double,5> &Mac);
template std::istream & operator>>(std::istream & strm,Macierz<LZespolona,5> &Mac);
template std::ostream & operator<<(std::ostream & strm,const Macierz<LZespolona,5> &Mac);