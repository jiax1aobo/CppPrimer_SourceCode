#include "Sales_item.h"
#include <iostream>
#include <ostream>

int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item si;
    while (std::cin >> si) {
      if (si.isbn() == total.isbn()) {
        total += si;
      } else {
        std::cout << total << std::endl;
        total = si;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data provide" << std::endl;
  }
  return 0;
}