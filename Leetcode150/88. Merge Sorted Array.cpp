#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1;            // last index of initialized elements in nums1
    int j = n - 1;            // last index of nums2
    int k = m + n - 1;        // last index of total array nums1

    // Merge from end to start
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If anything left in nums2
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m, n;
    cout << "Enter number of elements in nums1 (excluding zeros): ";
    cin >> m;

    cout << "Enter number of elements in nums2: ";
    cin >> n;

    int nums1[200]; // ensure large enough array
    int nums2[100];

    cout << "Enter " << m << " sorted elements for nums1:\n";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    // Fill the rest with zero placeholders
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    cout << "Enter " << n << " sorted elements for nums2:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
