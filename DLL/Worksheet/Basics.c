
//BASICS 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    struct student* prv;
    int roll;
    struct student* nxt;
}st;

void add_begin(st** ptr)
{
    st* temp = (st*)malloc(sizeof(st));
    printf("Enter the details:\n");
    scanf("%d",&temp->roll);

    temp->prv=NULL;
    temp->nxt=(*ptr);
    if((*ptr)!=NULL)
    (*ptr)->prv=temp;
    (*ptr)=temp;
}

void add_end(st** ptr)
{
    st* temp = (st*)malloc(sizeof(st));
    printf("Enter the details:\n");
    scanf("%d",&temp->roll);

    if((*ptr)==0)
    {
        temp->prv=temp->nxt=(*ptr);
        (*ptr)=temp;
    }
    else
    {
        st* last = (*ptr);
        while(last->nxt)
        last=last->nxt;

        temp->nxt=last->nxt;
        last->nxt=temp;
        temp->prv=last;
    }
}

void add_middle(st** ptr)
{
    st* temp = (st*)malloc(sizeof(st));
    printf("Enter the details:\n");
    scanf("%d",&temp->roll);

    if(((*ptr)==0)||((temp->roll)<(*ptr)->roll))
    {
        temp->nxt=(*ptr);
        temp->prv=NULL;
        if((*ptr)!=NULL)
        (*ptr)->prv=temp;
        (*ptr)=temp;
    }
    else
    {
        st* last=(*ptr);
        while((last->nxt)&&((temp->roll)>(last->nxt->roll)))
        last=last->nxt;
        temp->nxt=last->nxt;
        temp->prv=last;
        last->nxt=temp;
    }
}

void print(st* ptr)
{
    if(ptr!=NULL)
    {
        while(ptr)
        {
            printf("%d ",ptr->roll);
            ptr = ptr->nxt;
        }
    }
    else
    printf("Nothing is there\n");

    printf("\n");
}

void rev_link(st** ptr)
{
    st* temp=(*ptr);
    while((*ptr))
    {
        temp = (*ptr)->prv;
        (*ptr)->prv = (*ptr)->nxt;
        (*ptr)->nxt = temp;

        (*ptr) = (*ptr)->prv;
    }
    (*ptr)=temp->prv;
}

int count(st* ptr)
{
    int c=0;
    if(ptr!=0)
    {
        while(ptr)
        {
            c++;
            ptr = ptr->nxt;
        }
        return c;
    }
    else
    return c;
}

void rev_data(st* ptr)
{
    int i,j,c=count(ptr);
    int size=sizeof(st)-2*sizeof(st*);
    st swp;
    st** temp = (st**)malloc(c*sizeof(st*));
    for(i=0;i<c;i++)
    {
        temp[i]=ptr;
        ptr = ptr->nxt;
    }
    for(i=0,j=c-1;i<j;i++,j--)
    {
        memcpy(&swp.roll,&temp[i]->roll,size);
        memcpy(&temp[i]->roll,&temp[j]->roll,size);
        memcpy(&temp[j]->roll,&swp.roll,size);
    }
}

void del(st** ptr)
{
    st* temp;
    while((*ptr))
    {
        temp = (*ptr);
        (*ptr) = (*ptr)->nxt;
        free(temp);
    }
}

int main()
{
    st* hptr=0;
    char op;
    do
    {
        add_middle(&hptr);
        printf("Do you want to add another node:\n");
        scanf(" %c",&op);
    } while (op=='y');
    print(hptr);

    rev_link(&hptr);
    print(hptr);

    rev_data(hptr);
    print(hptr);

    del(&hptr);
    print(hptr);
}