#include<stdio.h>
#include<stdlib.h>
struct Q
{
    int front,rear,size;
    unsigned cap;
    int* array;
};
struct Q* create(unsigned cap)
{
    struct Q* q=(struct Q*)malloc(sizeof(struct Q));
    q->cap=cap;
    q->front=q->size=0;
    q->rear=cap-1;
    q->array=(int*)malloc(q->cap * sizeof(int));
    return q;
}
int isFull(struct Q* q)
{
    return(q->size==q->cap);
}
int isEmpty(struct Q* q)
{
    return(q->size==0);
}
void enqueue(struct Q* q,int item)
{
    if(isFull(q))
    return;
    q->rear=(q->rear+1)%q->cap;
    q->array[q->rear]=item;
    q->size=q->size+1;
}
int dequeue(struct Q* q)
{
    if(isEmpty(q))
    printf("\nNo more tickets to be served");
    int item=q->array[q->front];
    q->front=(q->front+1)%q->cap;
    q->size=q->size-1;
    return item;
}
int main()
{
    int i,c,t,flag=0;
    printf("Enter the number of customer takes the tickets:\n");
    scanf("%d",&c);
    if(c>0)
    {
        struct Q* q=create(c);
        printf("The tickets in the system are:\n");
        for(i=1;i<=c;i++)
        {
            printf("%d ",i);
            enqueue(q,i);
        }
        printf("Enter the number of tickets served:\n");
        scanf("%d",&t);
        printf("\nThe served tickets are:\n");
        for(i=1;i<=t;i++)
        {
            if(isEmpty(q))
            {
                printf("\nNo more tickets to be served");
                flag=1;
                break;
            }
            else
            {
                printf("%d ",dequeue(q));
            }
        }
        if(!isEmpty(q))
        {
            printf("\nThe unserved tickets are:\n");
            while(!isEmpty(q))
                printf("%d ",dequeue(q));
        }
        else
        {
            if(flag==0)
                printf("\nNo more tickets to be served");
        }
    }
    else
    {
        printf("Invalid Number");
    }
}
