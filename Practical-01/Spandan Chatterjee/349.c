#include <stdlib.h>

int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {
    int seen[1001] = {0};
    int added[1001] = {0};

    int* result = malloc(1000 * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        seen[nums1[i]] = 1;
    }

    for (int i = 0; i < nums2Size; i++) {
        int x = nums2[i];

        if (seen[x] && !added[x]) {
            result[*returnSize] = x;
            (*returnSize)++;
            added[x] = 1;
        }
    }

    return result;
}