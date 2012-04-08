//STL::string test
//from http://www.cplusplus.com/reference/stl/
#include <iostream>

#include <string>

//using namespace std;

int main(int argc, char *argv[])
{
  std::string str;

//string initialisation
  if(argc==2)
  {//set string value from command line option
    str=argv[1];
  }
  else
  {//set default string value
    str="default";
  }

//standard output
  std::cout<<"str=\""<<str<<"\""<<std::endl;

/*
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
*/
  return 0;
}
