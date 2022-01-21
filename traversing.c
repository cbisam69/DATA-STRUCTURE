#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n,i,arr[20];//n can be less than or equal to 20
printf("enter the size of array\n");
scanf("%d",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}