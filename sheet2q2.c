#include<stdio.h>
int main(){
    int n;
    printf("enter number of students\n");
    scanf("%d",&n);

    int marks[n];
    printf("enter number of marks\n");
    for (int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

        printf("grades of students:\n");
        for(int i=0;i<n; i++){
        printf("student %d:",i+1);
         
        if(marks[i]>=75){
            printf("A grade\n");
        }
        else if(marks [i]>=60 ){
            printf(" B grade\n");
        }
        else if(marks[i]>=40){
            printf("C grade\n");
        }
        else{
            printf(" D grade\n");
        }
    }
    return 0;
    
}