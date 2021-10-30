#include<stdio.h>
int main(){
    int i,j,a[50][50],x,y;

    //enter the limit of the array
    printf("enter the limit:");
    scanf("%d%d",&x,&y);

    //enter the numbers to the array
    printf("enter the numbers:");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //display the array
    printf("the array is:");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
           printf("\na[%d][%d] : %d ",i,j,a[i][j]);
        }
    }
    return 0;
}
