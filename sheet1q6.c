#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x coordinate");
    scanf("%d",&x);
    printf("enter y coordinate");
    scanf("%d,&y");
    
    if (x >0 && y>0){
        printf("the coordinate point (%d,%d) lies in the first quadrant ");
        }else if (x <0 && y>0) {
            printf(" the coordinate point (%d,%d) lies in the second quad");
            }else if (x<0 && y <0){
                printf(" the coordinate point (%d,%d) lies in the third quad");
               } else if (x>0 && y<0){
                    printf(" the coordinate point (%d,%d) lies in the third quad");
                    }else if (x==0 && y==0){
                        printf(" thecoordinate point (%d, %d) lies in the origin");
                        }else if (x==0){
                            printf(" the coordinte point (%d,%d) lies in the y axis");
                            }else if (y==0){
                                printf(" the coordinate point (%d,%d) lies in the x axis");
                            }
                            return 0;
}