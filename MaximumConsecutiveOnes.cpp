//Maximum Consecutive Ones

/*
    Time complexity: O(N^2) 
    Space complexity: O(1)
    
    where 'N' is the total number of elements in the array.
*/

int longestSubSeg(vector<int> &arr , int n, int k) 
{ 

    // Stores the length of longest sub segment with all 1.
    int maxLen = 0; 
    int i,j;
  
    // i is the starting index of the subarray under consideration.
    for(i = 0; i < n; i++){
        int kCopy = k;      
        // If the value of current element is 0.
        if(arr[i] == 0){
            // Convert it to 1 if possible.
            if(kCopy > 0){
                kCopy--;
            }
            
            // Otherwise the current subarray can't be a candidate for the solution.
            else{
                continue;
            }
        }

        // Find the longest subarray with i as the starting index.
        for(j = i+1; j<n; j++){
            if(arr[j] == 0){
                if(kCopy > 0){
                    kCopy--;
                }
                else{
                    break;
                }
            }    
        }
        
        // Update maximum length.
        maxLen = max(maxLen , j-i);    
    }
  
    return maxLen; 
} 
