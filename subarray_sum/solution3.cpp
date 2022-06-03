#include <bits/stdc++.h>

using namespace std;

int calculateMaximumSubArraySum(int nums[], int size) {
  int best = 0, sum = 0;
  for (int i = 0; i < size; i++) {
    sum = max(nums[i], sum + nums[i]);
    best = max(best, sum);
  }

  return best;
}

int main() {
  int numbers1[4] = {5, 19, 4, -16};
  int numbers2[5] = {-8, 1, 2, -10, -15};
  int numbers3[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
  
  cout << calculateMaximumSubArraySum(numbers1, 4) << endl;
  cout << calculateMaximumSubArraySum(numbers2, 5) << endl;
  cout << calculateMaximumSubArraySum(numbers3, 8) << endl;
}
