#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

bool is5CharWord(const string &s) { return s.size() >= 5; }

int main(void) {
  vector<string> words{"the",  "quick", "red",  "fox", "jumps",
                       "over", "the",   "slow", "red", "turtle"};
  auto less5words = std::partition(words.begin(), words.end(), is5CharWord);
  for (auto it = words.begin(); it < less5words; ++it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}