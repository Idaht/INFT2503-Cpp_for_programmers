#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers{1.0, 2.7, 3.1, 4.0, 5.2};

  cout << numbers.front() << endl;
  cout << numbers.back() << endl;

  numbers.emplace(numbers.begin() + 1, 42);
  cout << numbers.front() << endl;

  double search_after = 5.2;
  if (find(numbers.begin(), numbers.end(), search_after) != numbers.end()) {
    cout << *find(numbers.begin(), numbers.end(), search_after) << endl;
  } else {
    cout << "Could not find number" << endl;
  }
}
