#include <iostream>
#include <string>
using namespace std;

int main() {
 struct {
 int myage = 19;
 string myname = "Ilknur";
 double myGPA = 3.8;
 } myIdentity;

 cout << "My age: "<< myIdentity.myage << endl;
 cout << "My name: "<< myIdentity.myname << endl;
 cout << "My GPA: " << myIdentity.myGPA << endl;

 return 0;
 }
