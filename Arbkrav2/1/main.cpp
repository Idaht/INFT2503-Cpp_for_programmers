#include <iostream>

using namespace std;

int main() {
  //a
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;
  cout << i << "\n"
       << j << "\n"
       << p << "\n"
       << q << "\n"
       << &i << "\n"
       << &j << "\n"
       << &p << "\n"
       << &q << endl;

  //b
  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  cout << *p << " " << *q << endl;
}
