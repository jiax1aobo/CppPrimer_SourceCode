#include <iostream>
#include <istream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

auto rdwr(istream &is) -> istream & {
  auto old_state = is.rdstate();
  is.clear();
  string data;
  cout << "input: ";
  while (std::getline(is, data)) {
    cout << "output: " << data;
    cout << endl << "input: ";
  }
  is.setstate(old_state);
  return is;
}

int main(void) {
  rdwr(cin);
  return 0;
}