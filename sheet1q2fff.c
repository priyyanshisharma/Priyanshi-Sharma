#include<stdio.h>
 int main()
 {
    int num1, num2, hcf;
    printf("enter two itegers");
    scanf("%d %d",&num1,&num2);
        while(num1!=num2) {
        if(num1>num2) {
            num1-=num2; }
        else { (num2-=num1);
        }

        
    }
    hcf=num1;
    printf("HCF is %d\n",hcf);
   
    return 0;
     }