#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool has_upper_little(const string &s) {
  for (auto c : s) {
    if (std::isupper(c))
      return true;
  }
  return false;
}

void all_to_lower(string &s) {
  for (auto &c : s) {
    if (std::isupper(c))
      c = std::tolower(c);
  }
}

int main(void) {
  cout << "'all lower' has upper little: " << has_upper_little("all lower")
       << endl;
  cout << "'has Upper' has upper little: " << has_upper_little("has Upper")
       << endl;
  string s = "ALL UPPER";
  all_to_lower(s);
  cout << "'ALL UPPER' transform to lower: " << s << endl;
}