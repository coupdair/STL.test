//case test
//compilation: g++ -o case case.cpp
//run line: ./case
//run line: ./case 10
//shell line: g++ -o case case.cpp && ./case && ./case 11 && ./case 123
#include <iostream>
#include <vector>

#include <string>
#include <sstream>
unsigned int stringToValue(const std::string &s)
{
     std::istringstream stream(s);
     unsigned int t;
     stream >> t;
     return t;
}

using namespace std;

int main(int argc, char *argv[])
{
  if(argc<2) {cout<<"usage: "<<argv[0]<<" integer\nexamples: "<<argv[0]<<" 123\n          "<<argv[0]<<" 01\n";return 1;}
  int i=stringToValue(argv[1]);
  cout<<"i=|"<<i<<"|\n";
  switch(i)
  {
    case 00:
    {
      cerr<<"case 00";
    } break;
    case 10:
    {
      cerr<<"case 10";
    } break;
    case 01:
    {
      cerr<<"case 01";
    } break;
    case 11:
    {
      cerr<<"case 11";
    } break;
    case 99:
    {
      cerr<<"case 99";
    } break;
    default:
    {
      cerr<<"case DEFAULT\n";
      return 1;
    } break;
  }
  cout<<"\n";

  return 0;
}
