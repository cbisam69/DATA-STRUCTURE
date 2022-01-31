#include <stdio.h>

int main()
{   int arr[100],i,n,ele,pos;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         printf("array element before insertion is %d\n",arr[i]);
     }
 
     printf("enter the elemnt to insert\n");
     scanf("%d",&ele);
     printf("enter position to insert the element\n");
     scanf("%d",&pos);//pos=n-1
     
     for(i=n-1;i>=pos-1;i--)
     {
         arr[i+1]=arr[i];
     }
     arr[pos-1]=ele;
    
     for(i=0;i<=n;i++)
     {
         printf("array element after insertion is %d\n",arr[i]);
     }
     return 0;
}
