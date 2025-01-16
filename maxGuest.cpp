#include <iostream>
#include <algorithm>

int maxGuest(int arr[], int dep[], int n) {
    std::sort(arr, arr + n);
    std::sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1;
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            curr++;
            i++;
        } else {
            curr--;
            j++;
        }
        res = std::max(res, curr);
    }
    return res;
}

int main() {
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Maximum number of guests at any time: " << maxGuest(arr, dep, n) << std::endl;

    return 0;
}
