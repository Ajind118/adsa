#include <stdio.h>

int main() {  // Changed from void main() to int main()
    int n;

    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {  // Indexing should start from 0
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (int counter = 0; counter < n-1; counter++) {
        for (int i = 0; i < n - counter-1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;  // Swapping should be done correctly
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}
