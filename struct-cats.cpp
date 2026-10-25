#include <iostream>
using namespace std;

struct cat {
string breed;
int age;
};

int main () {
cat cat1;
cat1.breed = "British Shorthair";
cat1.age = 5;

cat cat2;
cat2.breed = "Scottish Fold";
cat2.age = 2;

cout << "Our first cat is: " <<  cat1.breed << endl;
cout << "And her age is: " << cat1.age <<endl << endl;

cout << "Our second cat is: "<< cat2.breed << endl;
cout << "And his age is: "<< cat2.age << endl;

return 0;
}
