


     /* Assignment => 15 array and function

    - Write a function in c to merge two array
           of the same size sorted in descending order

    */

    #include<stdio.h>
    int main()
  {
      int A[]={1,3,5,7,9};
      int B[]={2,6,8,11,12};
      int C[10],temp=0;


     for(k=0 ;k<=9 ; k++)
     {
         if(i>=5)
         {
          while( k<10)
          {
              C[k] = B[j];
              j++;
              k++;
              if(k==10)
                break;
          }
         }
       else if(A[i]<B[j])
        {
         C[k]=A[i];
         i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
     }

     for(k=0 ; k<10 ; k++)
          printf("%d ",C[k]);
            return 0;

     }




