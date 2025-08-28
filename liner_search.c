#include <stdio.h>

// Linear search function
int linerSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = linerSearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found\n", target);

    return 0;
}
