
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n,i,arr[20];
float sum=0,mean;
printf("enter teh size of array\n");
scanf("%d",&n);
printf("the numbers are\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
mean=sum/n;
printf("the mean of the numbers is %f",mean);

return 0;
}