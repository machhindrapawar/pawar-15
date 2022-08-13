
     /* Assignment => 15 array and function */

    /* Write a function to find the greatest number from the given array of any size (TSRS) */

     #include<stdio.h>
     int main()
     {
        int A[]={10,40,50,30,40,50,60,70,100,80},i;
        for(i=0;i<=9;i++)
        printf("%d ",array(A));
     }
     int array(int b[])
     {
         int i,j,c=0;
         for(i=0;i<=9;i++)
         {
         for(j=0;j<=9;j++)
         {

             if(b[j]>b[j+1])
             {
                 c=b[j+1];
                 b[j+1]=b[j];
                 b[j]=c;
             }
         }

         }
         return *b;
     }








