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
  for (vector<int>::size_type i = 0; i < sz - 1; ++i) {
    cout << ivec[i] + ivec[i + 1] << ", ";
  }
  cout << endl << "pairs: ";
  for (vector<int>::size_type i = 0; i < sz / 2; ++i) {
    cout << ivec[i] + ivec[sz - 1 - i] << ", ";
  }
  cout << endl;
  return 0;
}