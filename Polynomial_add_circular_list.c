//Program to add two add polynomial usig circular linked list
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct poly_node 
{
    int coef;
    int expx,expy,expz;
    struct poly_node *link;
}POLY;

POLY *getnode();
void Read_poly(int n1,POLY *h1);
void print_poly(POLY *h);
POLY *Add_Poly(POLY *h1,POLY *h2);
int comp(POLY *t1,POLY *h2);
POLY *delete(POLY *h,POLY *temp);
void attach(int cf, POLY *temp,POLY **tres);
void eval(POLY *h1);


int main()
{
    int n1,n2;
    POLY *h1,*h2,*h3;
    h1=getnode();
    h2=getnode();
    h3=getnode ();
    h1->link=h1;
    h2->link=h2;
    h3->link=h3;
    printf("\nEnter no of terms for poly1 and poly2\n");
    scanf("%d%d",&n1,&n2);
    printf("\nEnter terms for poly1\n");
    Read_poly(n1,h1);
    printf("\nEnter terms for poly2\n");
    Read_poly(n2,h2);
    printf("\nDisplaying poly1\n");
    print_poly(h1);
    printf("\nDisplaying poly2\n");
    print_poly(h2);
    h3=Add_Poly(h1,h2);
    printf("\nThe result of  polynomial addition is\n");
    print_poly(h3);
    return 0;
    

}

POLY *getnode()
{
    POLY *temp;
    temp=(POLY*)malloc(sizeof(POLY));
    if(temp==NULL)
    {
        printf("\nNO MEMORY\n");
        return NULL;
    }
    return temp;
}

void Read_poly(int n,POLY *h)
{
    POLY *temp,*new_N;
    int i;
    temp=h;
    for(i=0;i<n;i++)
    {
        new_N=getnode();
        printf("\nEnter the coefficient,exponent of x term,exponent of y term,exponent of z term for %d\n",i+1);
        scanf("%d%d%d%d",&new_N->coef,&new_N->expx,&new_N->expy,&new_N->expz);
        temp->link=new_N;
        temp=temp->link;
    }
    temp->link=h;
    return;
}

void print_poly(POLY *h)
{
    POLY *temp;
    temp=h;
    temp=temp->link;
    while(temp->link!=h)
    {
        printf("\n Coefficient=%d\nExponent of x term=%d\nExponent of y term=%d\nExponent of z term=%d\n",temp->coef,temp->expx,temp->expy,temp->expz);
        temp=temp->link;
    }
     printf("\nCoefficient=%d\nExponent of x term=%d\nExponent of y term=%d\nExponent of z term=%d\n",temp->coef,temp->expx,temp->expy,temp->expz);
    return;
}

POLY *Add_Poly(POLY *h1,POLY *h2)
{
    POLY *temp1,*temp2;
    POLY *res=getnode();
    POLY *tempres=res;
    int sum;
    temp1=h1->link;
    while(temp1!=h1)
    {
        temp2=h2->link;
        while(temp2!=h2)
        {
            switch(comp(temp1,temp2))
            {
                case 1:sum=temp1->coef+temp2->coef;
                       attach(sum,temp1,&tempres);
                       h2=delete(h2,temp2);
                       temp2=h2->link;
                       temp1=temp1->link;
                       break;
                case -1://Exponents are not equal
                        temp2=temp2->link;
                        break;
            }
        }
        if(temp1!=h1)
        {
            attach(temp1->coef,temp1,&tempres);
            temp1=temp1->link;
        }
    }
    temp2=h2->link;
    while(temp2!=h2)
    {
        attach(temp2->coef,temp2,&tempres);
        temp2=temp2->link;
    }
    tempres->link=res;
    return res;
}

int comp(POLY *t1,POLY *t2)
{
    if((t1->expx==t2->expx)&&(t1->expy==t2->expy)&&(t1->expz==t2->expz))
    return 1;
    return -1;
}

void attach(int cf,POLY *temp,POLY **tres)
{
    POLY *newN=getnode();
    newN->coef=cf;
    newN->expx=temp->expx;
    newN->expy=temp->expy;
    newN->expz=temp->expz;
    (*tres)->link=newN;
    *tres=newN;
    return;
}

void eval(POLY *h1)
{
    POLY *temp=h1->link;
    int tx,ty,tz,x,y,z,sumt;
    scanf("%d%d%d",&x,&y,&z);
    while(temp!=h1)
    {
        tx=temp->expx;
        ty=temp->expy;
        tz=temp->expz;
        sumt=((temp->coef)*pow(x,tx)*pow(y,ty)*pow(z,tz));
        temp=temp->link;
    }
    return;
}

POLY *delete(POLY *h,POLY *temp)
{
    POLY *prev,*pres;
    prev=h;
    pres=h->link;
    while(pres!=temp)
    {
        prev=pres;
        pres=pres->link;
    }
    prev->link=pres->link;
    free(temp);
    return h;
}
