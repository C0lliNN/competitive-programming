#include <bits/stdc++.h>

using namespace std;

int main() {
  queue<string> s;

  s.push("Raphael");
  s.push("Collin");
  s.push("Teles");
  s.push("Manhães");

  cout << s.front() << endl;
  s.pop();
  cout << s.front() << endl;
}