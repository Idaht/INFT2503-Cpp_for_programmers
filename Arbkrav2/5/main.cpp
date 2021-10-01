#include <iostream>

using namespace std;

int main() {
  double number = 4;
  double *pointer = &number;
  double &ref = number;

  //1
  number = 1;
  cout << number << endl;

  //2
  *pointer = 2;
  cout << number << endl;

  //3
  ref = 3;
  cout << number << endl;
}
