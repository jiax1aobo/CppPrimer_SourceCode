#include <initializer_list>
#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> lst) {
  int res = 0;
  for (int x : lst)
    res += x;
  return res;
}
int main(void) {
  cout << "sum of {1, 2, 3}: ";
  cout << sum({1, 2, 3}) << endl;
  return 0;
}