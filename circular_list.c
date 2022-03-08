#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*link;
}NODE;
NODE*display(NODE*last);
NODE*del_rear(NODE*last);
NODE*del_front(NODE*last);
NODE*ins_rear(int ele,NODE*last);
NODE*ins_front(int ele,NODE*last);
NODE*getnode();



void main()
{   
    NODE*last=NULL;
    int ch,ele;
    for(;;)
    {
        printf("enter1 to ins_front,2 to ins_rear,3 to del_front,4 to deal_rear,5 to del_specific,6 to display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter elemnt to insert\n");
                   scanf("%d",&ele);    
                   last=ins_front(ele,last);
                   break;
            case 2:printf("enter elemnt to insert\n");
                   scanf("%d",&ele);
                   last=ins_rear(ele,last);
                   break;
            case 3:last=del_front(last);
                   break;
            case 4:last=del_rear(last);
                   break;
            case 6:display(last);
                   break;
            case 7:exit(0);
            
        }
    }
}

NODE*getnode()
{
    NODE*temp;
    temp=(NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("no memeory\n");
        return NULL;
    }
    return temp;
}
NODE*ins_front(int ele,NODE*last)
{
    NODE*temp=getnode();
    temp->data=ele;
    if(last==NULL)//0
    {
      temp->link=temp;
      return temp;
    }
    temp->link=last->link;//all case
    last->link=temp;
    return temp;
    
}
NODE*ins_rear(int ele,NODE*last)
{
    NODE*temp=getnode();
    temp->data=ele;
    if(last==NULL)//0
    {
      temp->link=temp;
      return temp;
    }
    temp->link=last->link;//all case
    last->link=temp;
    return last;
    
}
NODE*del_front(NODE*last)
{
    NODE*tent;
    if(last==NULL)
    {
        printf("empty list");
        return NULL;
    }
    if(last->link=last)
    {
        printf("the deleted elemnt is %d",last->data);
        free(last);
        return NULL;
    }
    tent=last->link;
    printf("the deleted elemnt is %d",tent->data);
    last->link=tent->link;
    free(tent);
    return last;
    
    
}

NODE*del_rear(NODE*last)
{
    if(last==NULL)
    {
        printf("empty list");
        return NULL;
    }
    if(last->link=last)
    {
        printf("the deleted elemnt is %d",last->data);
        free(last);
        return NULL;
    }
    NODE*prev,*present;
    prev=NULL;
    present=last;
    while(present->link!=last->link)
    {
        prev=present;
        present=present->link;
    }
    printf("the deleted element is %d",present->data);
    prev->link=present->link;
    free(present);
    return prev;
}
NODE*display(NODE*last)
{
   if(last==NULL)
    {
        printf("empty list");
    
    }
    NODE*temp;
    // temp=last->link;
    // while(temp->link!=last->link)
    for(temp=last->link;temp!=last;temp=temp->link)
    {
     printf("%d",temp->data);
    }
    printf("%d",last->data);
}
