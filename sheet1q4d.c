#include<stdio.h>
void swapwithpointers(int**a, int**b){
    int *temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x=4, y=6;
    int *a=&x, *b=&y;
    printf("befor swapping x=%d,y=%d\n",x,y);
    swapwithpointers(&a, &b);
    printf("after swapping x=%d, y=%d\n",*a,*b);
    return 0;
}
