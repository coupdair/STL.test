//STL::string test
//from http://www.cplusplus.com/reference/stl/
//compilation line: g++ -o string string.cpp
//run line: ./string
//shell line: g++ -o string string.cpp && ./string && ./string 123
#include <iostream>

#include <string>

//using namespace std;

int main(int argc, char *argv[])
{
  std::string str;

//string initialisation
  if(argc==2)
  {//set string value from command line option
    str=argv[1];
  }
  else
  {//set default string value
    str="default";
  }

//standard output
  std::cout<<"str=\""<<str<<"\"."<<std::endl;

//cat
  std::cerr<<"* cat string or char (i.e. + operator):"<<std::endl;
  str="basename_"+str+".ext";
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//reserve
  std::cerr<<"* reserve function:"<<std::endl;
  std::cout << "defaults"<<std::endl;
  std::cout << "  size: "     << (int) str.size() << "\n";
  std::cout << "  capacity: " << (int) str.capacity() << "\n";
  std::cout << "  max_size: " << (int) str.max_size() << "\n";
  int size=128;
  std::cout << "str.reserve("<<size<<")"<<std::endl;
  str.reserve(size);
  std::cout << "  size: "     << (int) str.size() << "\n";
  std::cout << "  capacity: " << (int) str.capacity() << "\n";
  std::cout << "  max_size: " << (int) str.max_size() << "\n";

//push_back
  std::cerr<<"* push_back function:"<<std::endl;
  for(int i=0;i<5; i++) str.push_back('0'+i);//note: to format a number use stringstream (see string_stream.cpp)
  std::cout<<"str =\""<<str<<"\"."<<std::endl;

//char
  std::cerr<<"* [] operator:"<<std::endl;
  std::cout<<"str["<<str.size()<<"]=";
  for(int i=0;i<str.size();i++) std::cout<<"'"<<str[i]<<"' ";
  std::cout<<std::endl;

//C++ to C path .c_str()
//! \todo x sprintf, any other ?

//clear
  std::cerr<<"* clear function:"<<std::endl;
  std::cout << "str.clear()"<<std::endl;
  str.clear();
  std::cout << "  size: "     << (int) str.size() << "\n";
  std::cout << "  capacity: " << (int) str.capacity() << "\n";
  std::cout << "  max_size: " << (int) str.max_size() << "\n";

  return 0;
}

