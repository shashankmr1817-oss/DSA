#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int *pi;

pi=(int *) malloc(5*sizeof(int));
*pi=33;
printf("%d",*pi);
free(pi);

}