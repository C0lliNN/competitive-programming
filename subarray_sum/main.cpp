#include <bits/stdc++.h>

using namespace std;

int calculateMaximumSubArraySum(int nums[], int size) {
  int best = -200, sum = 0;
  for (int i = 0; i < size; i++) {
    sum = max(nums[i], sum + nums[i]);
    best = max(best, sum);
  }

  return best;
}

int main() {
  int nums1[7] = {12, 3, -4, 12, 9, -3, 20};
  int nums2[4] = {-5, 3, 2, 1};
  int nums3[4] = {20, -3, -4, 1};

  cout << calculateMaximumSubArraySum(nums1, 7) << endl;
  cout << calculateMaximumSubArraySum(nums2, 4) << endl;
  cout << calculateMaximumSubArraySum(nums3, 4) << endl;
}
