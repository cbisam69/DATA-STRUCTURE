#include<stdio.h>
#include<stdlib.h>
#define  S 100
void delete(int pos,int arr[],int *n);
 void insert(int ele,int arr[],int pos,int *n);
 void display(int arr[],int n);
int main()
{
  int arr[S] ,n,ch,ele,pos,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("enter the array elemnt is\n");
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("array element before insertion is\n");
   for(i=0;i<n;i++)
     {
         printf(" %d\n",arr[i]);
     }
     
 
  for(;;)
  {
     printf("enter 1 to insert 2 to delete 4 to display 3 to exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("enter the elemnt to insert\n");
               scanf("%d",&ele);
               printf("enter position to insert the element\n");
               scanf("%d",&pos);
               insert(ele,arr,pos,&n);
               break;
        case 2:printf("enter the position from which we need to delete\n");
               scanf("%d",&pos);
               delete(pos,arr,&n);
               break;
        case 3:exit(0);
        case 4:display(arr,n);
     }
  }
}
void insert(int ele,int arr[],int pos,int* n)
{    
    int i;
     for(i=(*n-1);i>=pos-1;i--)
     {
         arr[i+1]=arr[i];
     }
     
     arr[pos-1]=ele;
     *n=*n+1;
     
    //  printf("array element after insertion is\n");
    
    //  for(i=0;i<=n;i++)
    //  {
    //      printf("%d\n",arr[i]);
    //  }
}

void delete(int pos,int arr[],int* n)
{
    for(int i=pos-1;i<(*n-1);i++)
 
    {
         arr[i]=arr[i+1];
     }
     *n=*n-1;
    //  printf("array after deletion is\n");
    //  for(int i=0;i<n-1;i++)
    //  {
    //      printf("%d\n",arr[i]);
    //  }
}
void display(int arr[],int n)

{
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}
