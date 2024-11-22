#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of marks:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int marks[n];

   
    printf("Enter the scores one by one:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

   
    int max = marks[0];
    int min = marks[0];

   
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }


    printf("Max marks is: %d\n", max);
    printf("Min marks is: %d\n", min);

    return 0;
}

