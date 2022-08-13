
  /* Assignment => 15 array and function */

    /* Write a function to find the greatest number from the given array of any size (TSRS) */

     #include<stdio.h>
     int main()
     {
        int A[]={30,40,50,30,40,50,60,70,100,80},i;
             printf("greatest number is %d",array(A));
     }
     int array(int b[])
     {
         int max=b[0],i;
         for(i=1;i<=9;i++)
         {
          if(max<b[i])
          max=b[i];
         }
         return max;
     }
