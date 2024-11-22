#include<stdio.h>
int subtract(int a, int b){
    while(b!=0) {
        int carry= (~a)& b;
    a=a^b; 
    b= carry << 1;
     }
     return a ;
    }
    int main() {
    int a,b;
    printf("enter two integers");
    scanf("%d %d",&a,&b); 
    int result= subtract(a,b);
    printf("result of %d-%d is %d\n",a,b,result);
    return 0;
    }