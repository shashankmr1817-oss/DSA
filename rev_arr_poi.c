#include<stdio.h>
int main()
{
   int a[]={10,20,30,40,50};
   int temp;
   int n=5;
   int *start=a;
   int *end=a+n-1;
   while(start<end){

    temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;

   }
   printf("reversed pointer array\n");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
   return 0;

}