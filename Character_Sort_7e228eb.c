#include <stdio.h>
void sort(char* a, int l)
{
    int i,j;
    char temp;
    for(j=0;j<l-1;j++)
    {
        for(i=0;i<l-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main()
{
    char a[1000],upper[1000],lower[1000];
    int i,j,k,l,x;
    scanf("%s",&a);
    for(i=0,j=0,k=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            upper[j]=a[i];
            j++;
        }
        else
        {
            lower[k]=a[i];
            k++;
        }
    }
    upper[j]='\0';
    lower[k]='\0';
    printf("%s\n",upper);
    printf("%s\n",lower);
    sort(upper,j);
    sort(lower,k);
    printf("%s\n",upper);
    printf("%s\n",lower);
    l=(j<k) ? j : k;
    for(i=0,x=0;i<l-1;i++)
    {
        a[x++]=upper[i];
        a[x++]=lower[i];
        printf("%d",x);
    }
    printf("%s",a);
    a[j+k+1]='\0';
}
