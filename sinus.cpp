//sinus test
//compilation line: g++ -o sinus sinus.cpp -lm
//run line: ./sinus
//shell line: g++ -o sinus sinus.cpp -lm && ./sinus
#include <iostream>
#include <math.h>

//using namespace std;

//Polynomial approximation
//sin(x) = x - 1/6 x^3 + 1/120 x^5 - 1/5040 x^7
#define SINUS value=value-value*value*value/6.0+value*value*value*value*value/120.0

//procedure
void sinus_reference(float &value)
{
  std::cerr<<__func__<<"(float &value)"<<std::endl;
  SINUS;
}

//procedure
void sinus_copy(float value)
{
  std::cerr<<__func__<<"(float value)"<<std::endl;
  SINUS;
  std::cerr<<__func__<<"/value="<<value<<std::endl;
}

//function
float sinus(float value)
{
  std::cerr<<__func__<<"(float value)"<<std::endl;
  SINUS;
  return value;
}

int main(int argc, char *argv[])
{
  float value=0.123456;
  //put value to standard output
  std::cout<<"value="<<value<<std::endl;

  //put sinus of value to standard output
  std::cout<<"sin("<<value<<")="<<sin(value)<<"\n\n";

  //put sinus of value to standard output
  std::cout<<"sinus("<<value<<")="<<sinus(value)<<"\n\n";

  //put sinus of value to standard output
  sinus_copy(value);
  std::cout<<"value="<<value<<"\n\n";

  //put sinus of value to standard output
  sinus_reference(value);
  std::cout<<"value="<<value<<std::endl;

  //return 
  return 0;
}

