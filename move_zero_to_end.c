#include<stdio.h>
int main(){
    int a[]={1,0,2,0,4,5};
    int i,j=0;
    int n=6;

    for(i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
        
        while(j<n){
            a[j]=0;
            j++;
        
    }

    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}