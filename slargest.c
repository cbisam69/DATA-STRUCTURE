#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int n,arr[20],i;
printf("enter the size of array\n");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&arr[i]);
 int greatest=arr[0];
 int pos=0;
 for(i=1;i<n;i++)
 {
     if(arr[i]>greatest)
     {
         greatest=arr[i];
     }
 }
 int sc=arr[1];//second largest
 for(i=0;i<n;i++)
 {
     if(arr[i]!=greatest)
     {
         if(sc<arr[i])
         {
             sc=arr[i];
         }
     }
 }
 printf("second largest number is %d",sc);
return 0;
}