#include <bits/stdc++.h>

using namespace std;

int main() {
  stack<string> s;

  s.push("Raphael");
  s.push("Collin");
  s.push("Teles");
  s.push("Manhães");

  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
}