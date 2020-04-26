#include "Wek.cpp"
template class Wektor<double,5>;
template class Wektor<LZespolona,5>;
template std::istream & operator>>(std::istream & strm, Wektor<double,5> & W);
template std::ostream & operator<<(std::ostream & strm,const Wektor<double,5> & W);
template std::istream & operator>>(std::istream & strm, Wektor<LZespolona,5> & W);
template std::ostream & operator<<(std::ostream & strm,const Wektor<LZespolona,5> & W);