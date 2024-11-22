#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, value, pos;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1]; 
    
   
    printf("enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Array before insertion: ");
    printArray(arr, n);
    
     printf("Insert value at front: ");
    scanf("%d", &value);
    for (int i = n; i > 0; i--) arr[i] = arr[i-1];
    arr[0] = value;
    n++;
    printf("Array after inserting at front: ");
    printArray(arr, n);
    
   
    printf("Insert value at position: ");
    scanf("%d", &value);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = value;
    n++;
    printf("Array after insertion at position %d: ", pos);
    printArray(arr, n);
    
   
    printf("Insert value at end: ");
    scanf("%d", &value);
    arr[n] = value;
    n++;
    printf("Array after inserting at end: ");
    printArray(arr, n);
    
    return 0;
}
