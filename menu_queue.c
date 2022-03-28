//insertion from rear,and deletion from front
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int delete(int*f,int queue[]);
void insert(int ele,int*r,int queue[]);
void display(int f,int r,int queue[]);

void main()
{
    int queue[SIZE],f=0,r=-1,n,ch,ele,del_ele;
    printf("enter the size of queue\n");
    scanf("%d",&n);
    for(;;)
    {
        printf("enter 1 to insert 2 to delete 3 to display 4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(r==(n-1))
                   {
                       printf("queue is full\n");
                       break;
                   }
                   printf("enter the element to insert\n");
                   scanf("%d",&ele);
                   insert(ele,&r,queue);
                   break;
            case 2:if(f>r)
                  {
                      printf("queue is empty\n");
                      break;
                  }
                  del_ele=delete(&f,queue);
                  printf("the deleted elemnt is %d",del_ele);
                  break;
            case 3: if(f>r)
                  {
                      printf("queue is empty\n");
                      break;
                  }
                  display(f,r,queue);
            case 4:exit(0);      
        }
    }
}
void insert(int ele,int*r,int queue[])
{
    (*r)++;
    queue[(*r)]=ele;
    return;
}

int delete(int*f,int queue[])
{
    int i=queue[(*f)];
    (*f)++;
    return i;
}

void display(int f,int r,int queue[])
{
    for(int i=f;i<=r;i++)
    printf("%d",queue[i]);
}
