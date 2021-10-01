#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void read_temperatures(double temperatures[], int length);

int tempUnder10 = 0;
int tempBetween10And20 = 0;
int tempOver20 = 0;
const int length = 5;

int main() {
  double temperatures[length];

  read_temperatures(temperatures, sizeof(temperatures) / sizeof(*temperatures));

  cout << "Number of temperatures under 10 is: " << tempUnder10 << endl;
  cout << "Number of temperatures between 10 and 20 is: " << tempBetween10And20 << endl;
  cout << "Number of temperatures over 20 is: " << tempOver20 << endl;
}

void read_temperatures(double temperatures[], int length) {
  ifstream fileReader;
  string temperatureString;
  fileReader.open("Temperatures.txt");

  if (fileReader.is_open()) {
    //int i = 0;
    for (int i = 0; i < length; i++) { //Using the length argument to avoid warning
      //while (getline(fileReader, temperatureString)) {
      getline(fileReader, temperatureString);
      temperatures[i] = stod(temperatureString);

      if (temperatures[i] < 10) {
        tempUnder10++;
      } else if (temperatures[i] > 20) {
        tempOver20++;
      } else {
        tempBetween10And20++;
      }

      // i++;
    }
  } else {
    cout << "Could not open file" << endl;
  }
  fileReader.close();
}
