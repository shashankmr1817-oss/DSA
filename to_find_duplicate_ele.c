#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,20,10,40};
    int i,j;
    int n=8;
    printf("Duplicate elements:  ");
     
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
                break;
            }
            
            
        }
    }
    
    return 0;
    
}