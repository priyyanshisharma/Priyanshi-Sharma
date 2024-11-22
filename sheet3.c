#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result ;

    printf("a. add\n");
    printf("b. sub\n");
    printf("c. multiplication\n");
    printf("d. division\n");
    printf("e. log values\n");
    printf("f  square roots\n");
    printf(" enter functionality");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("enter two numbers");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("result: %.2lf\n", result);
            break;

        case 2:
            printf("enter two numbers");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("result: %.2lf\n", result);
            break;

        case 3:
            printf("enter two numbers");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("result: %.2lf\n", result);
            break;

        case 4:
            printf("enter two numbers");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("result: %.2lf\n", result);
            } else {
                printf("invalid\n");
            }
            break;

        case 5:
            printf("enter a number");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = log(num1); 
                printf("log of %.2lf: %.2lf\n", num1, result);
            } else {
                printf("invalid\n");
            }
            break;

        case 6:
            printf("enter a number");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("sqr root of  %.2lf: %.2lf\n", num1, result);
            } else {
                printf("invalid\n");
            }
            break;

        default:
            printf("invalid\n");
    }

    return 0;
}
