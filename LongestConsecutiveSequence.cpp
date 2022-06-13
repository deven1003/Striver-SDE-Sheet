#include <bits/stdc++.h> 
/*
    devenkalathiya
    Time Complexity: O(N^3)
    Space Complexity: O(1)

    Where N is the length of array.
*/

// To check whether currNum is present in array or not.
bool arrayItContains(int currNum, int n, vector<int> &arr) {

    for (int i = 0; i < n; i++) {
        if (arr[i] == currNum) {
            return true;
        }
    }

    return false;
    
}

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // To store length of longest consecutive sequence.
    int mx = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Making arr[i] as first element of sequence.
        int currNum = arr[i];

        while (arrayItContains(currNum + 1, n, arr)) {
            // Setting currNum to be next consecutive element by increament.
            currNum++;
            count++;
        }

        // Update maximum length of consecutive sequence if any.
        mx = max(mx, count);
    }

    return mx;
}