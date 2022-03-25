#include<stdio.h>


 struct poly
 {
	 int coeff;
	 int expo;
 };
 
 struct poly p1[10],p2[10],p3[10];
  int readPoly(struct poly []);
 void displayPoly( struct poly [],int terms);

 void main()
 {
	int t1,t2,t3;
	t1=readPoly(p1);
	printf(" \n First polynomial : ");
	displayPoly(p1,t1);
	t2=readPoly(p2);
	printf(" \n Second polynomial : ");
	displayPoly(p2,t2);
 }
 
  int readPoly(struct poly p[10])
 {
	int t1,i;

	printf("\n\n Enter the total number of terms in the polynomial:");
	scanf("%d",&t1);

	printf("\n Enter the COEFFICIENT and EXPONENT in DESCENDING ORDER\n");
	for(i=0;i<t1;i++)
	{
		printf("   Enter the Coefficient(%d): ",i+1);
		scanf("%d",&p[i].coeff);
		printf("      Enter the exponent(%d): ",i+1);
		scanf("%d",&p[i].expo);        
	}
	return(t1);
 }
  void displayPoly(struct poly p[10],int t)
 {
	

	for(int i=0;i<t;i++)
	printf("%d(x^%d)+",p[i].coeff,p[i].expo);
	printf("%d(x^%d)",p[t-1].coeff,p[t-1].expo);
}
