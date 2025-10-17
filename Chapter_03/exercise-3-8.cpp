#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string result;
  cin >> result;
  // decltype(result.size()) sz = result.size();
  // for (decltype(result.size()) i = 0; i < sz; i++) {
  //   result[i] = 'x';
  // }
  decltype(result.size()) i = 0;
  while (i < result.size()) {
    result[i++] = 'x';
  }
  cout << "output: '" << result << "'" << endl;
  return 0;
}