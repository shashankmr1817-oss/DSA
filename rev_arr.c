#include<stdio.h>
int main(){
    int i;
    int a[]={1,2,3,4,5};
   // int *p=a;
   int n=5;
   int temp;
   for(i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
   }

    printf("reversed array\n"); 
     for(int i=0;i<n;i++){
    printf("%d ",a[i]);
     }
    return 0;
}