#include <iostream>
#include <algorithm>
#include <vector>

struct Interval {
    int st, end;
};

bool myComp(Interval a, Interval b) {
    return a.st < b.st;
}

void mergeIntervals(Interval arr[], int n) {
    std::sort(arr, arr + n, myComp);
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (arr[res].end >= arr[i].st) {
            arr[res].end = std::max(arr[res].end, arr[i].end);
            arr[res].st = std::min(arr[res].st, arr[i].st);
        } else {
            res++;
            arr[res] = arr[i];
        }
    }
    for (int i = 0; i <= res; i++) {
        std::cout << arr[i].st << " " << arr[i].end << std::endl;
    }
}

int main() {
    Interval arr[] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}
