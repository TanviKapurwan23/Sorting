void binSort(vector<int> &arr) {
    int count = 0;
    
    // Count the number of 0s
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            count++;
        }
    }
    
    // Fill the array with 0s and 1s based on the count
    for(int i = 0; i < arr.size(); i++) {
        if(i < count) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
}
