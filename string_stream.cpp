//STL::sstream test
//compilation line: g++ -o string_stream string_stream.cpp
//run line: ./string_stream
//run line: ./string_stream 12345
//shell line: g++ -o string_stream string_stream.cpp && ./string_stream && ./string_stream 12345
#include <iostream>

#include <string>
#include <sstream>
unsigned int stringToValue(const std::string &s)
//template<typename T> T stringToValue(const std::string &s)
{
     std::istringstream stream(s);
     unsigned int t;
//     T t;
     stream >> t;
     return t;
}
/*
template<typename T> std::string valueToString(const T& t)
{
     std::ostringstream stream;
     stream << t;
     return stream.str();
}
*/
//using namespace std;

int main(int argc, char *argv[])
{
//string to value
  int size=123;
  std::string str("default");
  if(argc==2)
  {
    str=argv[1];
    size=(int)stringToValue(str);
  }
  std::cout<<"size="<<size<<"\n"<<std::flush;
  std::cout<<"str=\""<<str<<"\"."<<std::endl;

/*
//value to string

  std::cout<<"str=\""<<str<<"\"."<<std::endl;

//value to string (fill with)
  int zeros=10;
  std::cout<<"output number using "<<zeros<<" character(s) filling with 0."<<std::endl;
  std::cout<<"str=\""<<str<<"\"."<<std::endl;
*/

  return 0;
}
