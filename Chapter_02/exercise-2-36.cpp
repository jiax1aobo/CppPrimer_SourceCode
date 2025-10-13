#include <iostream>
#include <ostream>
int main() {
  int a = 3, b = 4;
  decltype(a) c = a;   // int c = 3
  decltype((b)) d = a; // int &d = a;
  ++c;                 // c->4
  ++d;                 // a,d->4
  std::cout << "a: " << a;
  std::cout << ", b: " << b;
  std::cout << ", c: " << c;
  std::cout << ", d: " << d << std::endl;
  return 0;
}