#include<stdio.h>
int count_of_setBits(int n);
int main()
{
    int n;
    printf("Enter the array Size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%x",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=count_of_setBits(arr[i]);
    }

    printf("The Sum of SetBits : %d",sum);
}

int count_of_setBits(int n)
{
   int count=0;
   while(n!=0)
   {
       n=n&(n-1);
       count++;
   }
    return count;
}