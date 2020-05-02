#include "Ukl.cpp"
template class UkladRownanLiniowych<double,5>;
template class UkladRownanLiniowych<LZespolona,5>;
template std::istream & operator>>(std::istream &Strm,UkladRownanLiniowych<double,5> &UklRown);
template std::istream & operator>>(std::istream &Strm,UkladRownanLiniowych<LZespolona,5> &UklRown);
template std::ostream & operator<<(std::ostream &Strm,const UkladRownanLiniowych<double,5> &UklRown);
template std::ostream & operator<<(std::ostream &Strm,const UkladRownanLiniowych<LZespolona,5> &UklRown);