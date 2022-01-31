
#include <stdio.h>

int main()
{   int arr[100],i,n,pos;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         printf("array element after deletion is %d\n",arr[i]);
     }
 
    
     printf("enter the position in which you want to delete\n");
     scanf("%d",&pos);//pos=n-1
     for(i=pos-1;i<n-1;i++)
 
    {
         arr[i]=arr[i+1];
     }
     for(i=0;i<n-1;i++)
     {
         printf("array after deletion is %d\n",arr[i]);
     }
    
     return 0;
}
