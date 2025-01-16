#include <iostream>
#include <vector>

int hoarePartition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        std::swap(arr[i], arr[j]);
    }
}

int main() {
    std::vector<int> arr = {10, 80, 30, 90, 40, 50, 70};
    int n = arr.size();
    int pivotIndex = hoarePartition(arr, 0, n - 1);

    std::cout << "Pivot index: " << pivotIndex << std::endl;
    std::cout << "Array after partition: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
