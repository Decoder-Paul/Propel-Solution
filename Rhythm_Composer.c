#include<stdio.h>
int prime[100];
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    if(n<0 || k<0)
        printf("Negative integers cannot be prime\n");
    else if(n==0 && k==1)
    {
        printf("There are no prime numbers in the range %d to %d\n",n,k);
    }
    else if(n==1 && k==1)
    {
        printf("There are no prime numbers in the range %d to %d\n",n,k);
    }
    else
    {
        for(i=2; i*i<=k; i++)
        {
            if(prime[i] == 0)
            {
                for(j=i*2; j<=k; j+=i)
                {
                    prime[j]=1;
                }
            }
        }
        for(i=n;i<=k;i++)
            if(prime[i]==0)
                printf("%d ",i);
    }
}
