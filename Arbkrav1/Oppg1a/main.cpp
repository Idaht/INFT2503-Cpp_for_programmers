#include <iostream>

using namespace std;

const int length = 5;

int main() {
  cout << "Write " << length << " temperatures" << endl;
  double temp;
  int tempUnder10 = 0;
  int tempBetween10And20 = 0;
  int tempOver20 = 0;

  for (int i = 1; i < length + 1; i++) {
    cout << "Temperature " << i << ": ";
    cin >> temp;
    if (temp < 10) {
      tempUnder10++;
    } else if (temp > 20) {
      tempOver20++;
    } else {
      tempBetween10And20++;
    }
  }
  cout << "Number of temperatures under 10 is: " << tempUnder10 << endl;
  cout << "Number of temperatures between 10 and 20 is: " << tempBetween10And20 << endl;
  cout << "Number of temperatures over 20 is: " << tempOver20 << endl;
}
