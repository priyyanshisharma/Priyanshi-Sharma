#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, pos;
    
    printf("Enter no of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    printf("Array before deletion: ");
    printArray(arr, n);
    
    printf("Delete at front: ");
    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("Array after deleting at front: ");
    printArray(arr, n);
    
    printf("Delete at position: ");
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("Array after deleting at position %d: ", pos);
    printArray(arr, n);
    
   
    printf("Delete at end: ");
    n--;
    printf("Array after deleting at end: ");
    printArray(arr, n);
    
    return 0;
}
