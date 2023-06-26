#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main() {
   struct node *temp,*head=0,*newn;
   int count=1,i=1,pos;
   while(count){
   newn = (struct node*)malloc(sizeof(struct node));
   printf("enter data:");
   scanf("%d",&newn->data);
   if(head==0){
       head=newn;
       temp=newn;
   }
   else{
       temp->next=newn;
       temp=newn;
   }
   printf("0 or 1: ");
   scanf("%d",&count);
   }
   temp=head;
   while(temp!=0){
       printf("%d",temp->data);
       temp=temp->next;
   }
   newn = (struct node*)malloc(sizeof(struct node));
   printf("\nenter new data:");
   scanf("%d",&newn->data);
   newn->next=0;
   printf("\nenter position:");
   scanf("%d",&pos);
   temp=head;
   while(i<pos){
       temp=temp->next;
       i++;
   }
   newn->next=temp->next;
   temp->next=newn;



temp=head; 
   while(temp!=0){
       printf("%d",temp->data);
       temp=temp->next;
   }
   
   

    return 0;
}
