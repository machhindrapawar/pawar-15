



     /* Assignment => 15 array and function

    - Write a function to print all unique  element in an array
    EX: 10 20 30 40 40 40 30 20 -> print the single vale in not repeatation again

    */

    #include<stdio.h>
    int main()
  {
      int A[8]={1,2,5,1,6,2,3,4};
      print_unique(A,8);
  }
  int print_unique(int A[],int size)
  {
      int i,j,temp[size],check;
      for(i=0 ; i<size ; i++)
      {
          temp[i]=A[i];
      }
      for(i=0 ; i<size-1 ; i++)
      {
          check=0;
          for(j=i+1 ; j<size-1 ; j++)
           {
               if(temp[i]== temp[j])
               {
                check=1;
                temp[j]=-1;
               }
           }
           if(check == 0&& temp[i]!=-1)
           {
               printf("%d",temp[i]);
           }
      }
  }
