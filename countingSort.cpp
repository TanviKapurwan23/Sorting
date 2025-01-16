#include <iostream>
#include <vector>

void countSort(int arr[], int n, int k) {
    int count[k];
    for(int i = 0; i < k; i++) {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for(int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }
    int output[n];
    for(int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10; // Range of the input elements

    countSort(arr, n, k);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
