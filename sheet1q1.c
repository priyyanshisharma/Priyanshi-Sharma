#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalnum, remainder, result=0;
    int n=0;
    printf("enter an integer");
    scanf("%d",&num);

    originalnum=num;

    while(originalnum!=0){
        originalnum/=10;
        n++;

    }
    originalnum=num;
    while(originalnum!=0){
        remainder=originalnum %10;
        result+=pow(remainder,n); 
        originalnum/=10;
           }
    if(result==num){
        printf("%d is an amstrong number\n",num);
            }
            else {
                printf("%d is not an amstrong number\n",num);
            }
            return 0;
}