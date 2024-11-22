#include<stdio.h>
int main(){
    int n;
    
    printf("enter number of students\n");
    scanf("%d",&n);
    
    int marks[n];
    for(int i=0;i<n;i++){
    printf("enter number of marks\n");
    scanf("%d",&marks[i]);
    }

    //to increase each mark by 5
    for(int i=0; i<n; i++){
        marks[i]+=5;
        printf("\n");
    }

    //updated marks
    printf("updated marks\n");
    for (int i=0; i<n; i++){
        printf("student %d:%d", i+1, marks[i]);
    

    }
    printf("\n");
    return 0;
    
    

}