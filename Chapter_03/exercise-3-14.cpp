#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec;
  int val;
  while (cin >> val) {
    ivec.push_back(val);
  }
  cout << "output: ";
  for (auto &i : ivec) {
    cout << i << ", ";
  }
  cout << endl;
  return 0;
}