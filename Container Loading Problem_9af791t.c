#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i,temp;
    if (n == 1)
        return;
    for (i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    bubbleSort(arr, n-1);
}

int main()
{
    int n,i,w,sum,j;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
        c[i]=0;
    }
    scanf("%d",&w);
    bubbleSort(a,n);
    sum=0;
    for(i=0;i<n;i++){
        if(sum+a[i]<=w){
            sum+=a[i];
        }
        else{
            break;
        }
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                c[j]=1;
            }
        }
    }
    printf("%d\n[",i);
    for(j=0;j<n;j++){
        if(j==n-1){
            printf("%d]",c[j]);
        }
        else{
            printf("%d,",c[j]);
        }
    }
    return 0;
}

