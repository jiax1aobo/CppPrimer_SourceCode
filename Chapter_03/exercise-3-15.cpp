#include <iostream>
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
  while (cin >> str) {
    ivec.push_back(str);
  }
  cout << "output: ";
  for (auto &s : ivec) {
    cout << "'" << s << "', ";
  }
  cout << endl;
  return 0;
}