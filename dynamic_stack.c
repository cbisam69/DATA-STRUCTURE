#include<stdio.h>
#include<stdlib.h>
void display(int top,int* stack);
int pop(int*top,int*stack,int* count);
void push(int ele,int* top,int* stack,int* count);


void main()
{
    int*stack;
    int ele,top=-1,ch,cap=2,count=0,del_ele;
    stack=(int*)malloc(cap*sizeof(int));
    for(;;)
    {
        printf(" 1 to push\n 2 to pop\n 3 to display\n 4 to exit\n ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:if(count==cap)
                    {
                        printf("stack is full reallocate size\n");
                        stack=(int*)realloc(stack,cap*sizeof(int));
                        cap=cap*2;
                    }
                    printf("enter the element to be inserted\n");
                    scanf("%d",&ele);
                    push(ele,&top,stack,&count);
                    break;
            case 2:if(count==0)
                   {
                       printf("stack is empty\n");
                       break;
                   }
                   del_ele=pop(&top,stack,&count);
                   printf("the deleted elemnent is %d",del_ele);
                   break;
            case 3:if(count==0)
                   {
                       printf("stack is empty\n");
                       break;
                   }
                   display(top,stack);
                   break;
            case 4: exit(0);
        }
    }                         
} 

void push(int ele,int*top,int* stack,int*count)
{
  (*top)++;
  //stack[(*top)]=ele;
  *(stack + (*top))=ele;
  (*count)++;
}
int pop(int*top,int*stack,int* count)
{

 int k=*(stack + (*top));
 (*top)--;
 (*count)--;
 return k;
}
void display(int top,int* stack)
{
    for(int i=top;i>=0;i--)
    printf("\n%d",*(stack+i));
}    

