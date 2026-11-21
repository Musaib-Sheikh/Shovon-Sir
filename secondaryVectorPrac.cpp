/*
Purpose:
1. Using vector
2. Using struct
3. Using template < typename T >
4. Passing User Defined Data Type as peramiter in Vector related Function
*/
// Musaib
// First edit: 01/09/2026
// Last edit: 01/09/2026

#include <iostream>
#include <vector> // for using vector

using namespace std;

struct mona // 'mona' is a user defined data type
{
  string name;
  int age;
};

struct mona2 // 'mona2' is a user defined data type
{
  int age;
  string name;
};

template <typename T>
void printVector(vector<T> vectorVar)
{
  cout << "----------------------------------" << endl;
  cout << "Vector size: " << vectorVar.size() << endl;
  cout << "---------------" << endl;
  for (int i = 0; i < vectorVar.size(); i++)
  {
    cout << "index->" << i << ": " << vectorVar[i].name << " " << vectorVar[i].age << endl;
  }
}
int main()
{
  //-------------------------------------
  // variable sequence string int
  vector<mona> monaMvector;
  mona Mona1 = {"Hamid", 55};
  monaMvector.push_back(Mona1); //pass paramiter using variable

  printVector(monaMvector);
  //-------------------------------------
  // variable sequence int string
  vector<mona2> monaM2vector;
  monaM2vector.push_back({54, "Juran"});//pass paramiter using direct value

  printVector(monaM2vector);
  return 0;
}