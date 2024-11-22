#include<stdio.h>
void swapwithxor(int*a, int*b){
    *a= *a^ *b;
    *b= *a^ *b;
    *a= *a^ *b;

}
int main(){
    int a=7, b=6;
    printf("before swapping a=%d,b=%d\n",a,b);
    swapwithxor(&a,&b);
    printf("after swapping a=%d,b=%d\n",a,b);
    return 0;
    }