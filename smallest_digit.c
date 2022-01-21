#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,arr[20];
printf("enter the size of array\n");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int small,pos;
small=arr[0];
pos=0;
for(i=1;i<n;i++)
{
    if(arr[i]<small)
    {
    small=arr[i];
     pos=i;
    }
}
printf("the smallest element is %d",small);
printf("the position of smallest number is %d",pos);

return 0;
}
