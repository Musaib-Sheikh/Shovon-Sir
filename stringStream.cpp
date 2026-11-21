#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
#include<iomanip>
using namespace std;

struct Brothers
{
  string name;
  int age;
  float weight;
};

int main(void){
  Brothers s;
  string buffer;
  vector<Brothers>BrotherInfo;
  ifstream file("mona.txt");
  if(!file){
    cerr<< "ops!";
    return 1;
  }
  while(getline(file, buffer)){
    stringstream ss(buffer);
    ss>> s.name>> s.age>> s.weight;
    BrotherInfo.push_back(s);
  }

  // Output of vector elements
  cout <<left<< setw(10)<< "Name"<< " " <<left<< setw(5)<<"Age"<< " "<<right<< setw(10)<< "Weight" << endl;
  string line(27, '-'); cout<< line<< endl;
  for(Brothers temp: BrotherInfo)
    cout <<left<< setw(10)<< temp.name<< " " <<left<< setw(5)<<temp.age<< " "<<right<< setw(10)<< temp.weight << endl;

  return 0;
}