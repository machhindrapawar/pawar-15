
     /* Assignment => 15 array and function

    - Write a function in c to read n number of values in an array and display it in reverse order */
    #include<stdio.h>
    int main()
  {
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    int A[n];
    printf("Enter a vales");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
      reverse(A,n);
      return 0;
}
 void reverse(int A[],int n)
{
    int i;
    printf("reverse order is :");
    for(i=n-1;i>=0;i--)
     printf(" %d ",A[i]);
}










