#ifndef SYSTEM_TIME
#define SYSTEM_TIME

#include <iostream>
#include <sys/time.h>

//! \todo option: use POSIX
//! \todo option: use boost::
//! \todo option: use mpi::
//! mesure elapse time in code programs
/**
 * 
**/
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

#endif //SYSTEM_TIME

