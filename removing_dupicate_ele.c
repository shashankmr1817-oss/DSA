#include<stdio.h>
int main(){
    int a[]={1,1,2,3,3,4,5,7,8,9};
   int i,j=0;
   int n=11;
   for(i=0;i<n;i++){
    if(a[i]!=a[j]){
        j++;
        a[j]=a[i];
        
    }
   }
   for(i=0;i<j;i++){
    printf("%d ",a[i]);
   }
   return 0;
}