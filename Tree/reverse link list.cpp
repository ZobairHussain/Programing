#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
node * reverselinklist(node *head)
{
    struct node *curr, *prv, *nxt;
    prv = NULL;
    curr = head;
    nxt = NULL;
    while(curr!=NULL)
    {

        nxt = curr->next;
        curr->next = prv;

        prv = curr;
        curr = nxt;
    }
    head = prv;
    return head;
}
int main()
{
    struct node *head, *v, *nn; ///new node
    int num;
    head=NULL;
    v=head;
    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }
        nn=(struct node*)malloc(sizeof(struct node));
        nn->info=num;
        nn->next=NULL;
        if(head==NULL)
        {
            head=nn;
            v=nn;
        }
        else
        {
            v->next=nn;
            v=v->next;
        }
    }
    v=head;
    printf("\n");
    while(v !=NULL){
        printf("Current=%d  Next=%d  Value=%d \n",v,v->next,v->info);
        v=v->next;
    }
    v = reverselinklist(head);
    printf("\n");
    while(v !=NULL){
        printf("Current=%d  Next=%d  Value=%d \n",v,v->next,v->info);
        v=v->next;
    }
    return 0;
}

