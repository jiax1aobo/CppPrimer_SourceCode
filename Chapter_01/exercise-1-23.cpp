#include "Sales_item.h"
#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>

int main() {
  int cnt = 0;
  std::unordered_map<std::string, int> stat;
  Sales_item si;
  while (std::cin >> si) {
    if (stat.find(si.isbn()) != stat.end()) {
      stat[si.isbn()]++;
    } else {
      stat[si.isbn()] = 1;
    }
  }
  for (auto it = stat.begin(); it != stat.end(); it++) {
    std::cout << "book: " << it->first << ", sales count: " << it->second
              << std::endl;
  }
  return 0;
}