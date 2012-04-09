//time test
//compilation line: g++ -o time time.cpp
//run line: ./time
//shell line: g++ -o time time.cpp && ./time
//! \todo make a class
//! \todo option: use POSIX
//! \todo option: use boost::
//! \todo option: use mpi::
#include <iostream>
#include <sys/time.h>

//using namespace std;

int main(int argc, char *argv[])
{
  //dates
  static struct timeval oldStamp, newStamp;

  gettimeofday(&oldStamp,NULL);//start time
  //put binary name to standard output
  std::cout<<"binary name: "<<argv[0]<<std::endl;
  gettimeofday(&newStamp,NULL);//stop  time

  long time;//time
  time=newStamp.tv_sec-oldStamp.tv_sec;//time in second
  time=newStamp.tv_usec-oldStamp.tv_usec+1000000*time;//time in micro second

  std::cout<<"time="<<time<<" us"<<std::endl;

  //return 
  return 0;
}

