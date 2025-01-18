bool hasTripletSum(vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 2; ++i) {
        int left = i + 1, right = arr.size() - 1;
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == target) {
                return true;
            } else if (currentSum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return false;
}
