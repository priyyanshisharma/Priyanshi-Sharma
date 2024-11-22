// WAP to find who scored first “99” in an array marks
#include <stdio.h>
int main(){
    int n, i;
    printf("enter number of students\n");
    scanf("%d",&n);

    int marks [n];
    printf("enter number of marks\n");\
    for(i=0; i<n; i++) {
        scanf("%d", &marks[i]);

    }
    for (i=0; i<n; i++) {
        if(marks[i]==99){
            printf("students who scored first 99 marks\n",i);
            

        }
        }
        printf("no student scored 99\n");
         

        return 0;

    }
   