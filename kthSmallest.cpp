#include <queue>
#include <vector>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    // Create a max-heap of size k
    priority_queue<int> maxHeap;
    
    // Iterate through the array
    for(int i = 0; i < n; i++) {
        // Add current element to the heap
        maxHeap.push(arr[i]);
        
        // If heap size exceeds k, remove the largest element
        if(maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    
    // The root of the heap is the kth smallest element
    return maxHeap.top();
}
