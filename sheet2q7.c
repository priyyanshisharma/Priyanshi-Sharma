#include<stdio.h>
int main(){
    int n;
    printf("enter no of scores\n");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid\n");
        return 1;


    }
    int marks[n];
    printf("enter score one by one\n");
    for( int i=0; i<n ; i++){
        scanf("%d", &marks[i]);

    }
printf(" to check marks are evn or odd\n");
for(int i=0 ; i< n; i++){
    if( marks [i]%2==0){
        printf(" marks %d is even\n", marks[i]);

    }
else {
    printf(" marks %d is odd\n", marks[i]);

}
}   
return 0;


 }