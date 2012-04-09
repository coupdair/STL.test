//time test
//compilation line: g++ -o time time.cpp
//run line: ./time
//shell line: g++ -o time time.cpp && ./time
#include <iostream>
#include "system_time.h"

//using namespace std;

int main(int argc, char *argv[])
{
  //elapsed time
  system_time time;
  time.start();//get start time
  //put binary name to standard output
  std::cout<<"binary name: "<<argv[0]<<std::endl;
  time.stop();//get stop time
  std::cout<<"time="<<time.elapsed_time()<<" us"<<std::endl;//get elapsed time

  //return 
  return 0;
}

