#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words) {
  //   字典序排序
  std::sort(words.begin(), words.end());
  //   挑选重复元素
  auto end_unique = std::unique(words.begin(), words.end());
  //   删除重复元素
  words.erase(end_unique, words.end());
}

bool isShoter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main(void) {
  vector<string> words{"the",  "quick", "red",  "fox", "jumps",
                       "over", "the",   "slow", "red", "turtle"};
  elimDups(words);
  std::stable_sort(words.begin(), words.end(), isShoter);
  for (const auto &s : words)
    cout << s << " ";
  cout << endl;
  return 0;
}