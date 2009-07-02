//STL::vector test
//from http://www.cplusplus.com/reference/stl/vector/clear/
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  unsigned int i;
  unsigned int size=100000000;
  vector<int> myvector;

  cout << "myvector.reserve("<<size<<")"<<endl;
  cout << "myvector.reserve "<<sizeof(int)*i/1024/1024<<" MByte"<<endl;
  myvector.reserve(i);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector.push_back() 3 times"<<endl;
  myvector.push_back (0);
  myvector.push_back (127);
  myvector.push_back (255);

  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

//clear
  cout <<endl<< "myvector.clear()"<<endl;
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

  for (i=0; i<3; i++) cout << " " << myvector[i];
  cout <<"...";
  for (i=myvector.size()-3;i<myvector.size(); i++) cout << " " << myvector[i];
  cout <<endl;

  return 0;
}
