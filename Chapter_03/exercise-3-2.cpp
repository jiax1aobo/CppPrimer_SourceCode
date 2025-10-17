#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
// using std::getline;
using std::string;

int main() {
  //   string line;
  //   while (getline(cin, line)) {
  // cout << "line: '" << line << "'" << endl;
  //   }
  string word;
  while (cin >> word) {
    cout << "word: '" << word << "'" << endl;
  }
  return 0;
}