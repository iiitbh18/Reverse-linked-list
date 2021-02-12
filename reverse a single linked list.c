#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *reverse(struct node *start);
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
int main()
{
    struct node *p,*temp;
    int i,n,data,size,info;
}
struct node *addatbeg(struct node *start,int data);
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link=data;
    temp->link=start;
    start=temp;
    return start;

};
struct node *addatend(struct node *start,int data)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while(p!=NULL)
    {
        p=p->link;
        p->link=temp;
        temp->link=NULL;
        return start;
    }

};



struct node *create_list(struct node *start)
{
    int i,n,data;
    printf("enter the number of nodes");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
        return start;
    printf("enter the elements to be inserted");
    scanf("%d",&data);
    start=addatbeg(start,data);
    for(i=2;i<=n;i++)
    {
        printf("enter the elements to be inserted");
        scanf("%d",&data);
        start=addatend(start,data);
    }
    return start;
};

struct node *reverse(struct node *start)
{
    struct node *ptr,*prev,*next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        ptr=prev;
        ptr=next;
    }
    start=prev;
    return start;
};
