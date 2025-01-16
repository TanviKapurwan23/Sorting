#include <iostream>
#include <algorithm>
#include <climits>

int getminDiff(int arr[], int n) {
    int res = INT_MAX;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            res = std::min(res, std::abs(arr[i] - arr[j]));
        }
    }
    return res;
}

int main() {
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minDiff = getminDiff(arr, n);
    std::cout << "Minimum difference is " << minDiff << std::endl;

    return 0;
}

int getMinDiff(int arr[], int n){
    sort(arr, arr+n);
    int res = INT_MAX;
    for(int i = 1; i < n; i++){
        res = min(res, arr[i] - arr[i-1]);
    }
    return res;
}
