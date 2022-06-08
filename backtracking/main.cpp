#include <bits/stdc++.h>

using namespace std;

int counter = 0;
const int n = 4;
int column[n];
int diag1[n];
int diag2[n];

void search(int y) {
  if (y == n) {
    counter++;
    return;
  }

  for (int x = 0; x < n; x++) {
    if (column[x] || diag1[x+y] || diag2[x-y+n-1]) {
      continue;
    }

    column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
    search(y+1);
    column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
  }
}

int main() {
  search(0);

  cout << counter << endl;
}
