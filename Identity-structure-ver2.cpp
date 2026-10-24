#include <iostream>
#include <string>
using namespace std;

int main() {
 struct {
 int myage;
 string myname;
 float myGPA;
 } myIdentity;

 myIdentity.myage = 18;
 myIdentity.myname = "Ilknur";
 myIdentity.myGPA = 3.8;

 cout << myIdentity.myage << endl;
 cout << myIdentity.myname << endl;
 cout << myIdentity.myGPA;

 return 0;
 }
