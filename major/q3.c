#include <stdio.h>

// Function to merge two sorted arrays without duplicates
void merge_sorted_arrays(double arr1[], int len1, double arr2[], int len2, double result[], int *result_len) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them
    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            // Skip duplicates in arr1
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            // Skip duplicates in arr2
            if (k == 0 || result[k - 1] != arr2[j]) {
                result[k++] = arr2[j];
            }
            j++;
        } else {
            // If both elements are equal, add one and skip duplicates
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1 (if any)
    while (i < len1) {
        if (k == 0 || result[k - 1] != arr1[i]) {
            result[k++] = arr1[i];
        }
        i++;
    }

    // Add remaining elements from arr2 (if any)
    while (j < len2) {
        if (k == 0 || result[k - 1] != arr2[j]) {
            result[k++] = arr2[j];
        }
        j++;
    }

    // Set the length of the result array
    *result_len = k;
}

int main() {
    // Example input arrays
    double arr1[] = {1.2, 3.4, 5.6, 7.8};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    double arr2[] = {2.3, 3.4, 6.7, 9.1};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    // Output array
    double result[100]; // Assuming a maximum size for the result array
    int result_len;

    // Merge the arrays
    merge_sorted_arrays(arr1, len1, arr2, len2, result, &result_len);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < result_len; i++) {
        printf("%.1f ", result[i]);
    }
    printf("\n");

    return 0;
}