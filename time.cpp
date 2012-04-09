//time test
//compilation line: g++ -o time time.cpp
//run line: ./time
//shell line: g++ -o time time.cpp && ./time
//! \todo v make a class
//! \todo option: use POSIX
//! \todo option: use boost::
//! \todo option: use mpi::
#include <iostream>
#include <sys/time.h>

//using namespace std;

class system_time
{
//data members
  //start and stop dates
  struct timeval oldStamp, newStamp;
  //elapsed time
  long time;
//function members
  public:
  //get start time
  void start(void)
  {//get start date
    gettimeofday(&oldStamp,NULL);
  }
  //get stop date and compute elapsed time
  void stop(void)
  {
    //get stop date
    gettimeofday(&newStamp,NULL);
    //compute time delay
    time=newStamp.tv_sec-oldStamp.tv_sec;//time in second
    time=newStamp.tv_usec-oldStamp.tv_usec+1000000*time;//time in micro second
  }
  //get elapsed time
  int elapsed_time(void)
  {
    return time;
  }
};

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

