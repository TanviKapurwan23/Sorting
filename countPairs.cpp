#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countPairs(vector<int>& A, vector<int>& B) {
    int n = A.size();
    int m = B.size();

    // Count of special elements in B
    vector<int> countB(5, 0); // To store counts of 0, 1, 2, 3, 4 in B
    for (int b : B) {
        if (b < 5) {
            countB[b]++;
        }
    }

    // Sort B for binary search
    sort(B.begin(), B.end());

    long long total_pairs = 0;

    for (int a : A) {
        if (a == 0) {
            continue; // No pairs possible as 0^x = 0
        } else if (a == 1) {
            total_pairs += countB[0]; // Only 0 contributes when A[i] = 1
        } else {
            // Use binary search to find the first element in B > a
            auto it = upper_bound(B.begin(), B.end(), a);
            total_pairs += (B.end() - it); // All elements after `it` satisfy A[i] > B[j]

            // Add pairs with B[j] = 0 and B[j] = 1
            total_pairs += countB[0] + countB[1];

            // Handle special cases
            if (a == 2) {
                total_pairs -= (countB[3] + countB[4]); // Exception for (2, 3) and (2, 4)
            }
            if (a == 3) {
                total_pairs += countB[2]; // Exception for (3, 2)
            }
        }
    }

    return total_pairs;
}

// Driver code
int main() {
    vector<int> A = {2, 1, 6};
    vector<int> B = {1, 5};

    cout << "Number of pairs: " << countPairs(A, B) << endl;

    return 0;
}
