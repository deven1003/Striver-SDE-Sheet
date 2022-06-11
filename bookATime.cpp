/*
    Time Complexity: O(K * M)
    Space complexity: O(1),

    where 'K' is the sum of the time required to study all the chapters 
    and 'M' is the number of chapters.
*/

long long devenGivesNinjatest(int n, int m, vector<int> time)
{

    long long sum = 0;

    int maxTime = INT_MIN;

    // We will iterate through all the chapters and calculate the sum and maximum time.
    for (int i = 0; i < m; i++)
    {
        sum += time[i];
        maxTime = max(maxTime , time[i]);
    }

    // We will iterate through all the possible values of answer.
    for (int i = maxTime; i <= sum; i++)
    {
        
        long long days = 1;
        long long currentTime = 0;

        for (int j = 0; j < m; j++)
        {
            currentTime += time[j];
            if (currentTime > i)
            {
                days++;
                currentTime = time[j];
            }

        }

        // If the days required to study all the chaptes is less than or equal to n than answer is possible and we will return it.
        if (days <= n)
        {
            return i;
        }

    }

    return -1;
}