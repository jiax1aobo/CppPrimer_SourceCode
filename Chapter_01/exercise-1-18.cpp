#include <iostream>
int main() {
  int curr, val, times = 0;
  if (std::cin >> curr) {
    times = 1;
    while (std::cin >> val) {
      if (val == curr) {
        times++;
      } else {
        std::cout << curr << " occurs " << times << " times." << std::endl;
        times = 1;
        curr = val;
      }
    }
    std::cout << curr << " occurs " << times << " times." << std::endl;
  }
  return 0;
}