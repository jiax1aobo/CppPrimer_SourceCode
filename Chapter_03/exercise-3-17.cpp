#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> ivec;
  string str;
  cout << "input: ";
  while (cin >> str) {
    for (auto &c : str) {
      c = std::toupper(c);
    }
    ivec.push_back(str);
  }
  cout << "after change: " << endl;
  for (auto &STR : ivec) {
    cout << "'" << STR << "'" << endl;
  }
  return 0;
}