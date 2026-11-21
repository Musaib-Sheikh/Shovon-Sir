/*
Purpose:
1.Using vector and passing regular data type in function as peramiter
2.Using ---template < typename T>---
3.Using ---.push_back()---
*/
// Musaib
// First edit: 01/09/2026
// Last edit: 01/09/2026

#include <iostream>
#include <vector> // for using vector
using namespace std;

// fucntion that prints vector elements

template <typename randomType> // randomType is a variable that can be any data type according to what we are passing

void printVector(vector<randomType> vectorVar)
{
  cout << "---------------------------------------" << endl;
  cout << "Size of Vector: " << vectorVar.size() << endl;
  cout << "------------------" << endl;

  for (int i = 0; i < vectorVar.size(); i++)
  {
    cout << "index->" << i << ": " << vectorVar[i] << endl;
  }
}

int main()
{
  // Vector as integer
  vector<int> monaIvector; // declaring a vector "monaIvector"

  monaIvector.push_back(10); // first element
  monaIvector.push_back(12); // second element
  monaIvector.push_back(2);  // third element

  printVector(monaIvector); // pass vector to printVector function

  //-----------------------------------------//

  // Vector as string
  vector<string> monaSvector; // declaring a vector "monaIvector"

  monaSvector.push_back("Mona");  // first element
  monaSvector.push_back("Hamid"); // second element
  monaSvector.push_back("Juran"); // third element

  printVector(monaSvector); // pass vector to printVector function

  //-----------------------------------------//

  // Vector as double
  vector<double> monaDvector; // declaring a vector "monaIvector"

  monaDvector.push_back(3.2);     // first element
  monaDvector.push_back(8.2);     // second element
  monaDvector.push_back(5.92344); // third element

  printVector(monaDvector); // pass vector to printVector function

  return 0; // return to OS
}