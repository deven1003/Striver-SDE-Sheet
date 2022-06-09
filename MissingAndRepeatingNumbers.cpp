#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

    int r, m;
    
  // Checking for the repeating number
    for(int i = 0; i < n; i += 1)
    {
        for(int j = i + 1; j < n; j += 1)
        {
            if(arr[i] == arr[j])
            {
                r = arr[i];
                break;
            }
        }
    }
    
    // Calculating the sum of the array
    int currSum = 0;
    for(int i = 0; i < n; i += 1)
    {
        currSum += arr[i];
    }
    
    
    // Sum of the numbers from 1 to n 
    int actualSum = n*(n + 1)/2; 
    
    m = actualSum - (currSum - r);
    
    pair<int, int>ans;
    
    ans.first = m;
    ans.second = r;
    
  return ans;
     

	
}
