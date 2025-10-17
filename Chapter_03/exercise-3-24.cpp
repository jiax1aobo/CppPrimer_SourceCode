#include <cctype>
#include <iostream>
#include <ostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec;
  int ival;
  cout << "input: ";
  while (cin >> ival) {
    ivec.push_back(ival);
  }
  vector<int>::size_type sz = ivec.size();
  cout << "nearby: ";
  for (auto it = ivec.begin(); it != ivec.end() - 1; ++it) {
    cout << *it + *(it + 1) << ", ";
  }
  cout << endl << "pairs: ";
  for (auto it = ivec.begin(), it2 = ivec.end() - 1; it < it2; ++it, --it2) {
    cout << *it + *it2 << ", ";
  }
  cout << endl;
  return 0;
}