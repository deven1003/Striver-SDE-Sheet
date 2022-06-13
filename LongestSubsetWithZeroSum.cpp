#include <bits/stdc++.h> 
/*  
    devenkalathiya
    Time Complexity: O(N^2)
    Space Complexity: O(1)

    Where 'N' denotes the number of elements of the array
*/

int LongestSubsetWithZeroSum(vector < int > arr)

{
  // Initialize result
  int maxLen = 0;
  int n = arr.size();

  // Pick a starting point
  for (int i = 0; i < n; i++) {

    // Initialize currSum for every starting point
    int currSum = 0;

    // Try all subarrays starting with 'i'
    for (int j = i; j < n; j++) {
      currSum += arr[j];

      // If currSum becomes 0,then update maxLen if required

      if (currSum == 0)
        maxLen = max(maxLen, j - i + 1);
    }
  }
  return maxLen;
}