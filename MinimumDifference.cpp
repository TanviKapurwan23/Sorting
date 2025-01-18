int MinimumDifference(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    
    int minDiff = INT_MAX;
    
    // Find the minimum difference between consecutive elements
    for(int i = 1; i < n; i++) {
        minDiff = min(minDiff, arr[i] - arr[i-1]);
    }
    
    return minDiff;
}
