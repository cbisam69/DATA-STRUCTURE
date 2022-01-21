#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
//array is collection of same data type  element   
/*array declaration
    type name[size];

    where type can be int,float,char or any valid data type
    name is simple name of that array
    index start from 0 to(size-1)
    [size] here number within brackets indicates the size of array or maximum number of element in array
*/
//int marks[3];
//1)here we have an array named marks having size of 10
//2) index start from 0 and end to 2
//3)marks[0],marks[1],marks[2]
      //general info
//1)element of array is stored in consecutive locations 
//2)array name indicate base addresss or starting address
/* 3)if base address is given the marks[n] address will be 
 =base address+size of data type*(n-lower bound)*/
//4)length of array =upper_bound+lower_bound+1 ex int arr[10] size 10

         /* array initialization during 

         type array_name[size]={ list of values separeted by commas}
         int arr[5]={1,2,3,4,5}
         int arr[5]={1,2} then rest places have junk values or 0
         int arr[]={69,96,4,6,57} here list of values define the size of array\
         */

//OPERATONS ON ARRAY
/*
1)TRAVERSING'
2)INSERTING AN ELEMENT
3)SERCHING AN ELEMENT 
4)DELETING AN ELEMNT
5)MERGIING TWO ARRAY
6)SORTING AN ARRAY IN AN ORDER
*/


return 0;
}