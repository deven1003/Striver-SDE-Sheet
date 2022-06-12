#include <bits/stdc++.h> 

/*
    Time Complexity: O(N^2)
    Space Complexity: O(1)

    Where 'N' is the number of elements in the given array/list
*/

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();

    // Array for storing final answer.
    vector<int> majorityElement;

    // Iterate through the array.
    for (int i = 0; i < n; i++)
    {
        // Variable for storing the frequency of the current element.
        int count = 0;

        // Iterate through the array to find the frequency of the current element.
        for (int j = 0; j < n; j++)
        {
            // Increment count if we find a element with value equal to current element.
            if (arr[j] == arr[i])
            {
                count = count + 1;
            }
        }

        // Store the current element if its frequency is more than n/3 and if it is not already stored.
        if (count > n / 3 && (majorityElement.size() == 0 || (majorityElement.size() != 2 && majorityElement.back() != arr[i])))
        {
            majorityElement.push_back(arr[i]);
        }
    }

    // Return the stored majority elements.
    return majorityElement;
}