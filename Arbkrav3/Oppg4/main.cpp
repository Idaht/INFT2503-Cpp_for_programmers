#include <iostream>

using namespace std;

int main() {
  //a)
  cout << "\na)" << endl;
  string word1 = "";
  string word2 = "";
  string word3 = "";

  cout << "Please write 3 words: " << endl;
  cout << "First word: ";
  cin >> word1;
  cout << "\nSecond word: ";
  cin >> word2;
  cout << "\nThird word: ";
  cin >> word3;

  //b)
  cout << "\nb)" << endl;
  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << sentence << endl;

  //c)
  cout << "\nc)" << endl;
  cout << word1 << ": " << word1.length() << endl;
  cout << word2 << ": " << word2.length() << endl;
  cout << word3 << ": " << word3.length() << endl;
  cout << sentence << ": " << sentence.length() << endl;

  //d)
  cout << "\nd)" << endl;
  string sentence2 = sentence;
  cout << sentence2 << endl;

  //e)
  cout << "\ne)" << endl;
  for (int i = 9; i < 12; i++) { //9 is 10th
    if (sentence2[i]) {
      sentence2[i] = 'x';
    }
  }

  cout << sentence << endl;
  cout << sentence2 << endl;

  //f)
  cout << "\nf)" << endl;
  string sentence_start = sentence.substr(0, 5);
  cout << sentence << endl;
  cout << sentence_start << endl;

  //g)
  cout << "\ng)" << endl;
  if (sentence.find("Hei") != string::npos) {
    cout << "Sentence contains 'Hei'" << endl;
  } else {
    cout << "Sentence does not contain 'Hei'" << endl;
  }

  //h)
  cout << "\nh)" << endl;
  int instances_of_er = 0;

  size_t npos = sentence.find("er", 0);
  while (npos != string::npos) {
    instances_of_er++;
    npos = sentence.find("er", npos + 1);
  }

  cout << "Sentence has " << instances_of_er << " of 'er'" << endl;
}
