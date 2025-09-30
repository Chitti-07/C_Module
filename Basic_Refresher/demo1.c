#include <stdio.h>

int main() {
    int m = 3;
    int n = 3;
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    int i = m - 1;
    int j = n - 1;
    int k = 6 - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        }else {
            nums1[k--] = nums2[j--];
        }
        
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", nums1[i]);
    }
}