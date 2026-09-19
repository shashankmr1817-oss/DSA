#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}