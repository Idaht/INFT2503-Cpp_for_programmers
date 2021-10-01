#include <iostream>

using namespace std;

int find_sum(const int *table, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += table[i];
  }
  return sum;
}

int main() {
  int n = 20;
  int array[n];
  for (int i = 0; i < n; i++) {
    array[i] = i + 1;
  }
  //Sum of 10 first
  int *pointer = array;
  cout << find_sum(pointer, 10) << endl;

  //Sum of next 5
  cout << find_sum(&array[9], 5) << endl;

  //Sum of last 5
  cout << find_sum(&array[15], 5) << endl;
}
