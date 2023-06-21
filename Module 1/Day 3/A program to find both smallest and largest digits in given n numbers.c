#include<limits.h>
void Find_big_small(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    Find_big_small(n);
    return 0;
}

void Find_big_small(int n)
{
    int n1=n;
    int big=INT_MIN;
    int small=INT_MAX;
    while(n!=0)
    {
        int rem = n%10;
        if(big<rem)
        {
            big=rem;
        }

        if(rem<small)
        {
            small=rem;
        }
        n=n/10;
    }


    if(big != small)
    {
        printf("Smallest digit : %d\n",small);
        printf("Biggest digit : %d\n",big);
    }
    else
    {
        printf("The result will be invalid.");
    }
}