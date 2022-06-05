#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int array[], int size, int element) {
  int a = 0, b = size - 1;
  while (a <= b) {
    int k = (a + b) / 2;
    if (array[k] == element) {
      return true;
    }

    if (array[k] > element) {
      b = k - 1;
    } else {
      a = k + 1;
    }
  }

  return false;
}

int main() {
  int array[] = {1, 2, 9, 12, 25, 53};

 cout << binarySearch(array, 6, 9) << endl;
 cout << binarySearch(array, 6, 26) << endl;
  
}