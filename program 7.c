

     /* Assignment => 15 array and function

    - Write a function in c to count a total number of duplicate element in an array */

    #include<stdio.h>
    int main()
  {
      int A[10]={1,2,3,1,4,2,3,4,9,9};
      int count=0;
      printf("%d",count_duplicatall(A));
  }
  int count_duplicatall(int A[])
  {
      int i,j,count=0;
      for(i=0 ; i<=99 ; i++)
      {
          for(j=i ; j<=9 ; j++)
          {
               if(A[i]==A[j+1])
               {
                 count++;
                 break;
               }
          }
      }
      return count;
  }
