#include<stdio.h>
void TOH(int n,char A,char B,char C);
void main()
{
    int n,A,B,C;
    printf("enter the no.of plates\n");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}
void TOH(int n,char A,char B,char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("\n%c to%c",A,B);
        TOH(n-1,C,B,A);
    }
}
