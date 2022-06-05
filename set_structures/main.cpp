#include <bits/stdc++.h>

using namespace std;

int main() {
  set <int> s;

  s.insert(5);
  s.insert(2);
  s.insert(3);

  cout << s.count(5) << endl;
  cout << s.count(4) << endl;

  for (auto x : s) {
    cout << x << endl;
  }

  s.erase(3);
  s.insert(4);

  unordered_set<int> os;

  os.insert(5);
  os.insert(2);

  cout << os.count(5) << endl;

}