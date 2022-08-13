
/* Assignment => 15 array and function */

/* Write a function to rotate an array by n position in d direction ,the d is an indicative
value for left or right.   10 20 30 40 50 60  */

#include<stdio.h>
#define right 1
#define left 0
int main()
{
    int A[8]= {10,20,30,40,50,60,70,90};
    display(A,8);
    rotate_array(A,8,left,2);
    display(A,8);
}
  void display(int A[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n; i++)
        printf("%d ",A[i]);
}
void rotate_array(int A[],int n,int dir,int shift_count )
{
    int i,temp;
    if(dir==right)
    {
        while(shift_count)
        {
            temp=A[n-1];
            for(i=n-1; i>=1; i--)
                A[i]=A[i-1];

            A[0]=temp;
            shift_count--;
        }
    }
    else
    {
        while(shift_count)
        {
            temp=A[0];
            for(i=0;i<n;i++)
                A[i]=A[i+1];

        A[n-1]=temp;
        shift_count--;
        }
    }
}














