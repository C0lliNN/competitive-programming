#include <bits/stdc++.h>

using namespace std;

int main() {
  set<string> names = {"Raphael", "Collin", "Teles", "Manhaes"};

  set<string>::iterator it = names.begin(); // returns a variable that points to the first element in the set
  auto it2 = names.begin();

  cout << *it2 << endl;

  // names.end() returns a variable that points to first element after the end of the set
  for (auto it3 = names.begin(); it3 != names.end(); it3++) {
    cout << *it3 << endl;
  }
}