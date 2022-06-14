#include <bits/stdc++.h> 
/*
    Time Complexity : O(N ^ 2)
    Space Complexity : O(1)
    
    Where 'N' denotes the number of elements in the given array.
*/

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int ans = 0;
    
    // Traverse through each subarray
    for (int i = 0; i < n; i++)
    {
        // The variable currentXor stores the XOR of the current subarray 
        int currentXor = 0;
        
        for (int j= i; j < n ;j++)
        {     
            
            currentXor = currentXor ^ arr[j];
              
            // Check if currentXor is equal to x 
            if(currentXor == x)
            {
                ans++;
            }
        }
    }
    
    // Return the variable ans
    return ans;
}
