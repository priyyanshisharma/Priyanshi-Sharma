#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of marks:\n");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Invalid number of marks\n");
        return 1;
    }

    int marks[n];
    int sum = 0;

    printf("Enter the scores\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]); 
        sum += marks[i];       
    }

    float average = (float)sum / n;

    printf("Average score : %.2f\n", average);
    return 0;
}

