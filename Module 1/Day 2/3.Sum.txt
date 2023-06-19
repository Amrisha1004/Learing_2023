#include<stdio.h>
int Alternate_sum(int a[100],int n);
int main()
{
    int n;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    int a[100];
    printf("Enter %d Elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int result = Alternate_sum(a,n);

    printf("Alternate Sum : %d",result);
}

int Alternate_sum(int a[100],int n)
{
    int sum=0;

    for(int i=0;i<n;i=i+2)
    {
        sum+=a[i];
    }
    return sum;
}