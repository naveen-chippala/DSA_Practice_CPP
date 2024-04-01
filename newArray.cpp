#include<iostream>
using namespace std;

class Student {
  // Student class to store the name and age of a student.
  string name;
  int age;

  public:
    void setStudent(int age, string name) {
      // Setter method to set values of data members.
      this -> age = age;
      this -> name = name;
    }

  void printStudent() {
    // Function to print data members of the student object.
    cout << "Student " << this -> name << ", age = " << this -> age << endl;
  }
};

int main() {
  // Integer pointer pointing to the integer variable.
  int * number = new int;
  // Integer pointer pointing to an array of 10 integers.
  int * numArray = new int[10];

  // Setting values to variables.
  * number = 100;

  for (int i = 0; i < 10; i++) {
    numArray[i] = i*2;
  }

  Student * student = new Student();

  student -> setStudent(19, "Ram");


  // Print the value of variables.
  cout << "Number = " << * number << endl;

  cout << "Number array\n";
  for (int i = 0; i < 10; i++) {
    cout << numArray[i] << " ";
  }
  cout << endl;

  student -> printStudent();

  // Free the memory.
  delete number;
  delete numArray;
  delete student;
  cout << "new Number array\n";
  for (int i = 0; i < 10; i++) {
    cout << numArray[i] << " ";
  }
  cout << endl;
cout << "Number = " << * number << endl;
//Student * student = new Student();
//student -> setStudent(111, "Ramesh");
  return 0;
}
