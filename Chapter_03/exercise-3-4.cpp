#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string word1, word2;
  cin >> word1 >> word2;
  // if (word1 == word2) {
  //   cout << "'" << word1 << "' is equal to '" << word2 << "'" << endl;
  // } else if (word1 > word2) {
  //   cout << "bigger one: " << word1 << endl;
  // } else {
  //   cout << "bigger one: " << word2 << endl;
  // }
  if (word1.size() == word2.size()) {
    cout << "size of '" << word1 << "' is equal to size of '" << word2 << "'"
         << endl;
  } else if (word1.size() > word2.size()) {
    cout << "bigger size(" << word1.size() << "): " << word1 << endl;
  } else {
    cout << "bigger size(" << word2.size() << "): " << word2 << endl;
  }
  return 0;
}