#include<stdio.h>
int main()
{
    int a[5];

    int *p=a;
    printf("Enter the array numbrs:\n");
    for (int i=0;i<5;i++){
        scanf("%d ",&p[i]);  //(a+i),(q+i),(i+a)
    }
    printf("Display the array elements:");
    for(int i=0;i<5;i++){
      printf("%d",*(a+i));  //a[i],*(p+i),p[i]
    }
    printf("%p ",a+1);
    printf("%p ",a+2);
    printf("%p ",&a+1);
    
    return 0;

}