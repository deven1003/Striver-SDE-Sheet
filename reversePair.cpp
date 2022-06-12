
int reversePairs(vector<int>& arr, int n) 
{
    int ans = 0;

    // Iterate i from 0 to n
    for (int i = 0; i < n; i++) 
    {
        // Iterate j from i + 1 to n
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j] * 2LL) 
            {
                ans++;
            }
        }
    }

    return ans;
}