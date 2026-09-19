#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int pos=2,value=18,n=5;
    int i,j;
   for(i=n;i>pos-1;i++){
    a[i]=a[i-1];
   } 
   printf("elements are:");
   for(i=0;i<n;i++){
    printf("%d",a[i]);
   }
   return 0;
}