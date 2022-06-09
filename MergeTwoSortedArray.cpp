vector<int> SortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {

    for (int i = 0; i < n; i++) {
        arr1[i + m] = arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    return arr1;
}