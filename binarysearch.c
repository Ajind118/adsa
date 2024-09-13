#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x is greater, ignore the left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore the right half
        else
            r = m - 1;
    }

    // If the element is not present in the array
    return -1;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    printf("Array: \n");
    printArray(arr, n);

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1)
        printf("Element %d is present at index %d.\n", x, result);
    else
        printf("Element %d is not present in the array.\n", x);

    return 0;
}
