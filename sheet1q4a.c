#include<stdio.h>
 void swapwitharithmetic(int*a, int*b) {
    *a=*a +*b;
    *b=*a -*b;
    *a=*a -*b;

 }
 int main(){
    int a=5, b=10;
    printf("before swapping a=%d,b=%d\n",a,b);
    swapwitharithmetic (&a,&b) ;
    printf("after swapping a=%d, b=%d\n",a,b);
    return 0;
    }