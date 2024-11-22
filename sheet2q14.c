#include <stdio.h>

int main() {
    int n;
    
    printf("enter no of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int foundDuplicate = 0;
    

    for (int i = 0; i < n; i++) {
    
        if (arr[i] == -1) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i]== arr[j]) {
                printf("%d ", arr[i]);
                arr[j] = -1; 
                foundDuplicate= 1;
                break;
            }
        }
    }

    if (!foundDuplicate) {
        printf("-1");
    }
 printf("\n");
    
    return 0;
}
