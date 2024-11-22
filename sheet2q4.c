//  WAP to find Who & how many students have scored 99 in an array Marks.
#include<stdio.h>
int main() {
    int i, n, count=0;

    printf("enter number of students: \n");
    scanf("%d",&n);

    int marks[n];
    printf("enter number of marks: \n");
    for( i=0; i<n;i++){
        printf("student %d", i+1);
        scanf("%d", &marks[i]);
    }

    for (i=0; i<n; i++){
        if (marks[i]==99) {
            printf("student %d scored 99 marks. \n",i+1);
            count++;

        }
    }

if (count>0){
    printf("total number of %d students who scored 99 marks. \n",count);
}
else {
    printf(" no student scored 99 marks. \n");

}
return 0;
}