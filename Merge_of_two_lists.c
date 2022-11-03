/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
node *addnode(node *,node *);
node *mergeTwoLists(node *list1, node *list2){
    node *new,*prev,*l3=NULL;
    while(list1!=NULL && list2!=NULL)
    {
        new=(node *)malloc(sizeof(node));
        prev=(node *)malloc(sizeof(node));
        if(list1->val==list2->val)
        {
            new->val=list1->val;
            new->next=NULL;
            prev->val=list2->val;
            prev->next=NULL;
            l3=addnode(l3,new);
            l3=addnode(l3,prev);
            list1=list1->next;
            list2=list2->next;
        }
        else if(list1->val<list2->val){
            new->val=list1->val;
            new->next=NULL;
            l3=addnode(l3,new);
            list1=list1->next;
        }
        else{
            new->val=list2->val;
            new->next=NULL;
            l3=addnode(l3,new);
            list2=list2->next;
        }
    }
    if(list1==NULL){
        while(list2!=NULL)
        {
            new=(node *)malloc(sizeof(node));
            new->val=list2->val;
            new->next=NULL;
            l3=addnode(l3,new);
            list2=list2->next;
        }
    }
    if(list2==NULL)
    {
        while(list1!=NULL){
            new=(node *)malloc(sizeof(node));
            new->val=list1->val;
            new->next=NULL;
            l3=addnode(l3,new);
            list1=list1->next;
        }
    }
    return l3;
}
node *addnode(node *l3,node *new){
    node *temp;
    if(l3==NULL){
        l3=new;
    }
    else{
        temp=l3;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
    }
    return l3;
}



output:
Your input
[1,2,4]
[1,3,4]
Output
[1,1,2,3,4,4]
Expected
[1,1,2,3,4,4]
