
  /* Assignment => 15 array and function */

    /* Write a function to find first occurrence of adjacent duplicate values
       in the array . function has to return the value of the element
         Ex=10 20 30 30 40  40 50 60  */


#include<stdio.h>
int main()
{
  int A[10]={10,32,30,40,40,60,60,70,20,20},i;
  printf("%d is duplicate value",duplicate_value(A));
}
int duplicate_value(int A[])
{
  int i,j;
  for(i=0;i<=9;i++)
  {
    if( A[i]==A[i+1])
       return A[i];
  }

}


