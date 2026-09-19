#include<stdio.h>
int main(){
    int i,j,r,c;
    int a[30][30];
    printf("Enter the size of the row:");
    scanf("%d",&r);
    printf("Enter the size of the column:");
    scanf("%d",&c);
    printf("Enter the elements:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the array elements:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
    }
return 0;

}