#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
  int x = 10;
  auto fdec = [&x]() mutable {
    if (x > 0)
      --x;
    return x > 0 ? true : false;
  };
  for (std::size_t i = 0; i < 20; ++i) {
    cout << "X(" << x << ") Call Times(" << i << ") -> " << fdec() << " X(" << x
         << ")" << endl;
  }
  return 0;
}