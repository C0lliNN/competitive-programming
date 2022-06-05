#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string,int> m;

  m["Raphael"] = 6500;
  m["Collin"] = 2999;

  cout << m["Raphael"] << endl;
  cout << m["Teles"] << endl;

  if (m.count("Raphael")) {
    cout << "Exists" << endl;
  }

  for (auto x : m) {
    cout << x.first << ": " << x.second << endl;
  }
}