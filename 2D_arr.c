#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4};
    int *p,i,j;
    
    p=&a[i][j];

    
    printf("display array elements:");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",(*(a+1)));

        }
    }
    return 0;
}