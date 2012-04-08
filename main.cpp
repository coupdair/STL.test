//main test
//compilation line: g++ -o main main.cpp
//run line: ./main
//shell line: g++ -o main main.cpp && ./main
#include <iostream>

//using namespace std;

int main(int argc, char *argv[])
{
  //put binary name to standard output
  std::cout<<"binary name: "<<argv[0]<<std::endl;
  return 0;
}

