#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string result, curr;
  // while (cin >> curr) {
  //   result += curr;
  // }
  // cout << "output: '" << result << "'" << endl;
  while (cin >> curr) {
      result += (curr + ' ');
  }
  cout << "output: '" << result << "'" << endl;
  return 0;
}