
  /* Assignment => 15 array and function */

    /* Write a function to find the smallest  number from the given array of any size (TSRS) */

     #include<stdio.h>
     int main()
     {
        int A[]={30,40,50,20,40,50,60,70,100,80},i;
             printf("smallest  number is %d",array(A));
     }
      int array(int b[])
     {
         int min=b[0],i;
         for(i=1;i<=9;i++)
         {
          if(min>b[i])
          min=b[i];
         }
         return min;
     }
