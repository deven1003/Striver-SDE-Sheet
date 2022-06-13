
#include <bits/stdc++.h> 
/*   devenkalathiya
    Time Complexity: O(N^4)
    Space complexity: O(1)

    Where 'N' is the number of element present in the given array.
*/

string fourSum(vector < int > arr, int target, int n) {
    /* 
        Checking all possible combinations of 
        four elements to get required target sum.
    */
    for (int i = 0; i < n - 3; ++i) {
        for (int j = i + 1; j < n - 2; ++j) {
            for (int k = j + 1; k < n - 1; ++k) {
                for (int l = k + 1; l < n; ++l) {
                    // If we found such four number then return Yes.
         if (arr[i] + arr[j] + arr[k] + arr[l] == target) {
                        return "Yes";
                    }
                }
            }
        }
    }
    // If there is no such four number are present then return No.
   return "No";
}
