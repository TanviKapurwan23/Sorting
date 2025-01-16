#include <iostream>
#include <vector>

int lomutoPartition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

int main() {
    std::vector<int> arr = {10, 80, 30, 90, 40, 50, 70};
    int n = arr.size();
    int pivotIndex = lomutoPartition(arr, 0, n - 1);

    std::cout << "Pivot index: " << pivotIndex << std::endl;
    std::cout << "Array after partition: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
