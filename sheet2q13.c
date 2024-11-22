#include <stdio.h>

void rotateArray(int arr[], int n) {
    int last = arr[n-1]; 
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[0] = last;  

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
  
    printf("enter no of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    printf("array before rotation: ");
    printArray(arr, n);
    
    rotateArray(arr, n);
    
   
    printf("array after rotation: ");
    printArray(arr, n);
    
    return 0;
}
