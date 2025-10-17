#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string result;
  cin >> result;
  // for (auto &ch : result) {
  for (char &ch : result) { // nothing changed
    ch = 'x';
  }
  cout << "output: '" << result << "'" << endl;
  return 0;
}