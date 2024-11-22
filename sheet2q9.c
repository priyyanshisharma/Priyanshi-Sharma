#include <stdio.h>

int findPeak(int arr[], int n) {
    if (arr[0] >= arr[1]) return arr[0];   
    if (arr[n-1] >= arr[n-2]) return arr[n-1]; 

    for (int i = 1; i < n-1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            return arr[i]; 
        }
    }

    return -1; 
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("A peak element is: %d\n", findPeak(arr, n));

    return 0;
}

