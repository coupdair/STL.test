//main test
//compilation line: g++ -o main main.cpp
//run line: ./main
//shell line: g++ -o main main.cpp && ./main && ./main 123
//shell line: ./main 123  > /dev/null
//shell line: ./main 123 2> /dev/null
//shell line: ./main      > /dev/null 2> /dev/null && echo "program is ok."
//shell line: ./main 123  > /dev/null 2> /dev/null && echo "program is ok."
//! \todo . add shell line example to know if program return 0 or 1 !
#include <iostream>

//using namespace std;

int main(int argc, char *argv[])
{
  //put binary name to standard output
  std::cout<<"binary name: "<<argv[0]<<std::endl;

  //example of program stop in case of 1 command line argument set by user (e.g. ./main hop)
  if(argc==2)
  {//return not zero value to specify the error (i.e. error code value)
    std::cerr<<"error: no argument should be used by this program.\n"<<std::flush;
    std::cerr<<"error: presently at least 1 has been provided (e.g. "<<argv[1]<<")."<<std::endl;
    return 1;
  }

  //return 
  return 0;
}

