// Purpose of the code: Creating sorted file according to name or gpa from a source file

#include<bits/stdc++.h>
using namespace std;

// Structure of Data formet
struct student
{
  string name;
  float gpa;
};

// Sort function
void custom_sort(vector<student> &v, int choice){
    sort(v.begin(), v.end(), [choice](student a, student b){
    if(choice==1){
      return a.name< b.name; // Process if option 1 chosen
    }else{
      return a.gpa> b.gpa; // Process if option 2 chosen
    }
  });
}

int main(){

    // User choice read
  cout<< "Choice 1-> Sort accoding to name\nChoice 2-> Sort accodring to number\nEnter your choice here: ";
  int choice;
  cin>> choice;

  // User input validity check 
  if(choice> 2 || choice < 1){
    cout<< "Invalid choice!";
    return 1;
  }
  
  // File open
  ifstream file("student_list.txt");

  // Vector declaration
  vector<student>v;

  // Temporary "student" type container variable
  student temp;

  // Store name and gpa from file and store in temporary variable-> vector
  while(file>> temp.name>> temp.gpa){
    v.push_back(temp);
  }

  // File close
  file.close();

/*   // User choice read
  cout<< "Choice 1-> Sort accoding to name\nChoice 2-> Sort accodring to number\nEnter your choice here: ";
  int choice;
  cin>> choice;

  // User input validity check 
  if(choice> 2 || choice < 1){
    cout<< "Invalid choice!";
    return 1;
  } */

  // Call cumtom sort function 
  custom_sort(v, choice);

  // Print all sorted value 
  cout<< "------------"<< endl;
  for(auto k: v)
  cout<< k.name<< " "<< k.gpa<< endl;
  cout<< "------------"<< endl;
  
  // Program finishes
  return 0;
}