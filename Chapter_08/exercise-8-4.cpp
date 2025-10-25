#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

void fileRead(ifstream &is, vector<string> &data) {
  string line;
  while (std::getline(is, line)) {
    data.push_back(line);
  }
}

int main(void) {
  vector<string> fdata;
  string fname("./exercise-8-1.cpp");
  ifstream ifile(fname);
  if (ifile) {
    fileRead(ifile, fdata);
    cout << "=== File Content ===" << endl;
    for (vector<string>::size_type i = 0; i < fdata.size(); ++i) {
      cout << "line(" << i << ") " << fdata[i] << endl;
    }
    ifile.close();
  } else {
    cout << "couldn't open file: " << fname << endl;
  }
  return 0;
}