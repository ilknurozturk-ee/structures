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

int x;

cout << "Choose a cat (write 1 or 2): ";
cin>>x;

if (x==1) {
cout <<endl<< "Our first cat is: " <<  cat1.breed << endl;
cout << "And her age is: " << cat1.age <<endl << endl;
}

else if(x==2) {
cout <<endl<< "Our second cat is: "<< cat2.breed << endl;
cout << "And his age is: "<< cat2.age << endl;
}
else {
cout <<endl<< "Sorry there are only 2 cats :(" << endl;
}

return 0;
}
