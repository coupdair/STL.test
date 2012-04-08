//main test
//compilation line: g++ -o main main.cpp
//run line: ./main
//shell line: g++ -o main main.cpp && ./main && ./main 123 && ./main 123 > /dev/null
#include <iostream>

//using namespace std;

int main(int argc, char *argv[])
{
  //put binary name to standard output
  std::cout<<"binary name: "<<argv[0]<<std::endl;

  //example of program stop in case of 1 command line argument set by user (e.g. ./main hop)
  if(argc==2)
  {//return not zero value to specify the error (i.e. error code value)
    std::cerr<<"error: no argument is used by this program."<<std::endl;
    return 1;
  }

  //return 
  return 0;
}

