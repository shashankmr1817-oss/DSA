#include<stdio.h>
int main(){
    int a[30][30],i,j,m,n;
    int (*p)[30];
    p=a;
   // p=&a[i][j];
    printf("Enter the size of the row:");
    scanf("%d",&m);
    printf("Enter the size of the column:");
    scanf("%d",&n);
    printf("Enter the aarray elements:");
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Array elements are:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",*(*(a+i)+j));   
        }
    }
}