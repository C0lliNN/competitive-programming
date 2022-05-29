#include <bits/stdc++.h>

using namespace std;

int main() {
  int x = 12;
  long y = 2342342L;
  long long z = 123456789123456789LL;

  printf("%d %ld %lld \n", x, y, z);

  int a = 123456789;
  // This generates bugs because an implicit type conversion is mae
  long long b = a * a;
  printf("%lld \n", b);

  // This is the correct way
  b = (long long)a * a;
  printf("%lld \n", b);
}