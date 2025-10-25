#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::placeholders::_1;

void elimDups(vector<string> &words) {
  //   字典序排序
  std::sort(words.begin(), words.end());
  //   挑选重复元素
  auto end_unique = std::unique(words.begin(), words.end());
  //   删除重复元素
  words.erase(end_unique, words.end());
}

bool checkSize(const string &s, string::size_type sz) { return s.size() < sz; }

void biggies(vector<string> &words, string::size_type sz) {
  elimDups(words);
  std::stable_sort(words.begin(), words.end(),
                   [](const string &s1, const string &s2) -> bool {
                     return s1.size() < s2.size();
                   });
  auto bindCheckSize = std::bind(checkSize, _1, sz);
  auto first_gt_sz = std::partition(words.begin(), words.end(), bindCheckSize);

  std::for_each(first_gt_sz, words.end(),
                [](const string &s) { cout << s << " "; });
  cout << endl;
}

int main(void) {
  vector<string> words{"the",  "quick", "red",  "fox", "jumps",
                       "over", "the",   "slow", "red", "turtle"};
  biggies(words, 5);
  return 0;
}