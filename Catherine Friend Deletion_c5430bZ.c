#include <stdio.h>
typedef enum { false, true } bool;
int main()
{
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    bool flag =false;
    for(i=0,j=0;i<n;i++)
    {
        if(scanf("%d",&arr[i])==-1)
        {
            printf("Invalid Input ");
            break;
            flag=true;
        }
        j++;
    }
    for(i=0;i<j;i++)
    {
        if(arr[i]>100)
        {
            printf("The popularity should be between 0 and 100");
            flag=true;
        }
    }
    if(flag==false)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1] && k!=0)
            {
                flag=true;
                arr[j]=0;
                k--;
            }
        }
        if(flag==false)
        {
            arr[n-1]=0;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=0)
                printf("%d ",arr[i]);
        }
    }
}
