#include<stdio.h>
void swapwithtemp(int *a, int *b) {
int temp= *a;
*a=*b;
*b=temp;
}
int main(){
    int  a=2, b=4;
    printf("before swapping a=%d, b=%d\n",a,b);
    swapwithtemp(&a, &b);
    printf("after swapping a=%d, b=%d\n",a,b);
    return 0;
}