#include <bits/stdc++.h>

using namespace std;

int main() {
  double x = 0.3 * 3 + 0.1;
  double y = 1;

  // false
  cout << (x == y) << "\n";
  // better ways of comparing floating point numbers. assume that two numbers are equal if the difference between them is less than ε
  cout << (abs(x - y) < 1e-9) << "\n";
}