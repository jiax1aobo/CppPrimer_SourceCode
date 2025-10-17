#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s;
  cout << "input: ";
  cin >> s;
  for (auto &ch : s) {
    if (ispunct(ch))
      ch = '\0';
  }
  cout << "output: '" << s << "'" << endl; // 合法
  return 0;
}