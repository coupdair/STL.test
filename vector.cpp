//STL::vector test
//from http://www.cplusplus.com/reference/stl/vector/clear/
#include <iostream>
#include <vector>

//template<typename T> T hop(T &i){i+=5;};

#include <string>
#include <sstream>
unsigned int stringToValue(const std::string &s)
//template<typename T> T stringToValue(const std::string &s)
{
     std::istringstream stream(s);
     int t;//T t;
     stream >> t;
     return t;
}
/*
template<typename T> std::string valueToString(const T& t)
{
     std::ostringstream stream;
     stream << t;
     return stream.str();
}
*/
using namespace std;

int main(int argc, char *argv[])
{
  unsigned int i;
  unsigned int size=100000000;//hop(size);
  vector<int> myvector;

  if(argc==2) {const string arg=argv[1];size=stringToValue(arg);}

  unsigned int range=4;
  if(size<2*range) size=2*range+1;

//reserve
  cout << "myvector.reserve("<<size<<")"<<endl;
  cout << "myvector.reserve "<<sizeof(int)*size/1024/1024<<" MByte"<<endl;
  myvector.reserve(size);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

//push_back
  cout << "myvector.push_back() 3 times"<<endl;
  myvector.push_back (0);
  myvector.push_back (127);
  myvector.push_back (255);

  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];
  cout <<endl;
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];
  cout <<endl;

//clear
  cout << "myvector.clear()"<<endl;
  myvector.clear();
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector.push_back() 2 times"<<endl;
  myvector.push_back (255);
  myvector.push_back (0);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "\nmyvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

//fill
  cout <<endl<< "myvector.resize("<<size<<")"<<endl;
  myvector.resize(size);
  fill(myvector.begin()+3,myvector.end(),1);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  for (i=0; i<range; i++) cout << " " << myvector[i];
  cout <<"...";
  for (i=myvector.size()-range;i<myvector.size(); i++) cout << " " << myvector[i];
  cout <<endl;

  return 0;
}
