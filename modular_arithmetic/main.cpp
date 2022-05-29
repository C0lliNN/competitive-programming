#include <bits/stdc++.h>

using namespace std;
/*
( a + b ) mod m = ( a mod m + b mod m ) mod m
( a − b ) mod m = ( a mod m − b mod m ) mod m
( a · b ) mod m = ( a mod m · b mod m ) mod m
*/

int main() {
  long long n = 10;
  long long m = 13;
  long long x = 1;

  for (int i = 2; i <= n; i++) {
    x = (x*i)%m;
  }
  cout << x%m << "\n";
}