#include<stdio.h>
void fun1(int n,int i);
void fun2(int i);
void fun3(int n1,int i);
int main()
{
    int n,s,n1;
    printf("Enter the n valule : ");
    scanf("%d",&n);
    printf("Enter the s value : ");
    scanf("%d",&s);
    printf("Enter the n1 valule : ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++)
    {
        fun1(n,i);
        fun2(i);
        fun3(n1,i);
    }

}
void fun1(int n,int i)
{
    for(int j=0;j<n-i;j++)
        {
            printf("%d",j+1);
        }
}

void fun2(int i)
{
    for(int j=0;j<i;j++)
    {
            printf(" ");
    }
}
void fun3(int n1,int i)
{
    for(int j=0;j<n1;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",n1-j);
            }
        }
        printf("\n");
}