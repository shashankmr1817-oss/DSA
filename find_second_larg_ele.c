#include<stdio.h>
#include<limits.h>
int main(){
    int a[]={10,20,33,43,55,67};
    int i;
    int n=6;
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    
    for(i=0;i<n;i++){
        if(a[i]>largest){
            
            secondLargest=largest;
            largest=a[i];
        }
        else if(a[i]>secondLargest && a[i]!=largest){
            secondLargest=a[i];
        }
    }
printf("Second Largest: %d",secondLargest);
        
    
    return 0;
}