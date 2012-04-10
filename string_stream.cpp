//STL::sstream test
//compilation line: g++ -o string_stream string_stream.cpp
//run line: ./string_stream
//run line: ./string_stream 12345
//shell line: g++ -o string_stream string_stream.cpp && ./string_stream && ./string_stream 12345
#include <iostream>

#include <string>
#include <sstream>

//! convert string to value
/**
 * convert string to value, e.g. integer to string
**/
template<typename T> void stringToValue(const std::string &s,T &t)
{
  std::istringstream stream(s);
  stream >> t;
}//stringToValue

//! convert value to string (might be fixed size with specific character fill)
/**
 * format value to string, string size can be fixed and filled with a specific character
**/
template<typename T> std::string valueToString(const T& value,int size=-1,char c='0')
{
  std::ostringstream stream;
  if(size>0)
  {
    stream.width(size);
    stream.fill(c);
  }
  stream << value;
  return stream.str();
}//valueToString

//using namespace std;

int main(int argc, char *argv[])
{
//string to value
  int value=123;
  std::string str("default");
  if(argc==2)
  {
    str=argv[1];
    std::cerr<<"* command line argument from stringToValue function:"<<std::endl;
    stringToValue(str,value);
  }
  std::cout<<"value="<<value<<"\n"<<std::flush;
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//cat
  std::cerr<<"* cat string or char (i.e. + operator):"<<std::endl;
  str="basename_"+str+".ext";
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//value to string
  std::cerr<<"* valueToString function:"<<std::endl;
  str=valueToString(value);
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//value to string (fill with)
  std::cerr<<"* valueToString function:"<<std::endl;
  int zeros=5;
  str=valueToString(value,zeros);
  std::cerr<<"output number using "<<zeros<<" character(s) filling with 0."<<std::endl;
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//cat
  std::cerr<<"* cat string or char (i.e. + operator):"<<std::endl;
  str="basename_"+valueToString(value,zeros)+".ext";
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

  return 0;
}

