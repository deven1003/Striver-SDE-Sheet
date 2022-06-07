#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
      int maxSum = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            maxSum = max(maxSum, sum);
            
            if(sum < 0){
                sum = 0;
            }
        }
        
        return maxSum;
}