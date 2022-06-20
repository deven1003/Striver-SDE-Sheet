//Minimum Number of Platforms

/*
    Time Complexity : O(N * 2360)
    Space Complexity : O(1)

    Where 'N' is the number of trains.
*/

int calculateMinPatforms(int at[], int dt[], int n) {
    // Array to store the number of platforms required at different points of time.
    int platforms[2360] = {0};

    // Variable to store the final answer i.e. minimum number of platforms required.
    int minNumOfPlatforms = 1;

    for (int i = 0; i < n; i++) {
        // Increment number of platforms for all times between arrival and departure (both inclusive).
        for (int j = at[i]; j <= dt[i]; j++) {
            platforms[j]++;

            // Update minimum number of platforms.
            minNumOfPlatforms = max(minNumOfPlatforms, platforms[j]);
        }
    }

    // Return the minimum number of platforms.
    return minNumOfPlatforms;
}