//STL::vector test
//from http://www.cplusplus.com/reference/stl/vector/clear/
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  unsigned int i=5;
  vector<int> myvector;

  cout << "myvector.reserve("<<i<<")"<<endl;
  myvector.reserve(i);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector.push_back() 3 times"<<endl;
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

  cout <<endl<< "myvector.clear()"<<endl;
  myvector.clear();
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "myvector.push_back() 2 times"<<endl;
  myvector.push_back (1101);
  myvector.push_back (2202);
  cout << "size: " << (int) myvector.size() << "\n";
  cout << "capacity: " << (int) myvector.capacity() << "\n";
  cout << "max_size: " << (int) myvector.max_size() << "\n";

  cout << "\nmyvector contains:";
  for (i=0; i<myvector.size(); i++) cout << " " << myvector[i];

  cout << endl;

  return 0;
}
