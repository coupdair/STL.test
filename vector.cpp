//STL::vector test
//from http://www.cplusplus.com/reference/stl/vector/clear/
//compilation line: g++ -o vector vector.cpp
//run line: ./vector 123
//run line: ./vector
//shell line: g++ -o vector vector.cpp && ./vector 123 && ./vector 

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

//using namespace std;

int main(int argc, char *argv[])
{
  unsigned int i;
  unsigned int size=100000000;//100 MB
  std::vector<int> array;

//get vector size value from command line (otherwise default)
  if(argc==2) {size=(int)stringToValue(std::string(argv[1]));}

  unsigned int range=4;
  if(size<2*range) size=2*range+1;

//reserve
  std::cout << "array.reserve("<<size<<")"<<std::endl;
  std::cout << "array.reserve "<<sizeof(int)*size/1024/1024<<" MByte"<<std::endl;
  array.reserve(size);
  std::cout << "size: " << (int) array.size() << "\n";
  std::cout << "capacity: " << (int) array.capacity() << "\n";
  std::cout << "max_size: " << (int) array.max_size() << "\n";

//push_back
  std::cout << "array.push_back() 3 times"<<std::endl;
  array.push_back (0);
  array.push_back (127);
  array.push_back (255);

  for (i=0; i<array.size(); i++) std::cout << " " << array[i];
  std::cout <<std::endl;
  std::cout << "size: " << (int) array.size() << "\n";
  std::cout << "capacity: " << (int) array.capacity() << "\n";
  std::cout << "max_size: " << (int) array.max_size() << "\n";

  std::cout << "array contains:";
  for (i=0; i<array.size(); i++) std::cout << " " << array[i];
  std::cout <<std::endl;

//clear
  std::cout << "array.clear()"<<std::endl;
  array.clear();
  std::cout << "size: " << (int) array.size() << "\n";
  std::cout << "capacity: " << (int) array.capacity() << "\n";
  std::cout << "max_size: " << (int) array.max_size() << "\n";

  std::cout << "array.push_back() 2 times"<<std::endl;
  array.push_back (255);
  array.push_back (0);
  std::cout << "size: " << (int) array.size() << "\n";
  std::cout << "capacity: " << (int) array.capacity() << "\n";
  std::cout << "max_size: " << (int) array.max_size() << "\n";

  std::cout << "\narray contains:";
  for (i=0; i<array.size(); i++) std::cout << " " << array[i];

//fill
  std::cout <<std::endl<< "array.resize("<<size<<")"<<std::endl;
  array.resize(size);
  fill(array.begin()+3,array.end(),1);
  std::cout << "size: " << (int) array.size() << "\n";
  std::cout << "capacity: " << (int) array.capacity() << "\n";
  std::cout << "max_size: " << (int) array.max_size() << "\n";

  for (i=0; i<range; i++) std::cout << " " << array[i];
  std::cout <<"...";
  for (i=array.size()-range;i<array.size(); i++) std::cout << " " << array[i];
  std::cout <<std::endl;

  return 0;
}
