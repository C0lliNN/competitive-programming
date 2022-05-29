#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("input.csv", "r", stdin);
  freopen("output.csv", "w", stdout);

  string name, oldestName;
  int age, oldestAge;
  oldestAge = -1;
  while(cin >> name >> age) {
    if (age > oldestAge) {
      oldestAge = age;
      oldestName = name;
    }
  }

  cout << oldestName;
}