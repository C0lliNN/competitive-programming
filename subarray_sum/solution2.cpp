#include <bits/stdc++.h>

using namespace std;

int calculateMaximumSubArraySum(int nums[], int size) {
  int maxSum = 0;
  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = i; j < size; j++) {
      sum += nums[j];
      maxSum = max(maxSum, sum);
    }
  }

  return maxSum;
}

int main() {
  int numbers1[4] = {5, 19, 4, -16};
  int numbers2[6] = {-8, 1, 2, -10, -15, 1};
  int numbers3[8] = {9, 4, -3 , -4, -2, 1, 1, -9};
  
  cout << calculateMaximumSubArraySum(numbers1, 4) << endl;
  cout << calculateMaximumSubArraySum(numbers2, 6) << endl;
  cout << calculateMaximumSubArraySum(numbers3, 8) << endl;
}