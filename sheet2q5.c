#include<stdio.h>
int main(){
    int marks[]={90, 67, 75, 99, 93};
    int n= sizeof(marks)/ sizeof(marks[0]);
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=marks[i];
    }
printf("sum of scores  in the marks array: %d\n",sum);
return 0;
}