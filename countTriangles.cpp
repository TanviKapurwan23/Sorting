int countTriangles(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int count = 0;
    int n = arr.size();
    
    // Iterate through the array with three pointers
    for (int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        
        while (i < j) {
            if (arr[i] + arr[j] > arr[k]) {
                count += (j - i);  // All pairs from i to j are valid
                j--;
            } else {
                i++;
            }
        }
    }
    return count;
}
