#include <cctype>
#include <iostream>
#include <ostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "origin: ";
  for (auto &x : ivec) {
    cout << x << ", ";
    x *= 2;
  }
  cout << endl << "changed: ";
  for (auto it = ivec.begin(); it != ivec.end(); ++it) {
    cout << *it << ", ";
  }
  cout << endl;
  return 0;
}