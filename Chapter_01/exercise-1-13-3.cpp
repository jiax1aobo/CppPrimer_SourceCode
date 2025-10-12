#include <iostream>
int main() {
  std::cout << "Input two numbers: ";
  int v1, v2;
  std::cin >> v1 >> v2;
  int start, end;
  if (v1 <= v2)
    start = v1, end = v2;
  else
    start = v2, end = v1;
  std::cout << "The number between " << start << " and " << end << ": "
            << std::endl;
  for (int i = start; i <= end; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}