#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main() {
   struct node *temp,*head=0,*newn;
   int count=1;
   while(count){
   newn = (struct node*)malloc(sizeof(struct node));
   printf("entr data:");
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
   newn->next=head;
   head=newn;
   temp=head;
   while(temp!=0){
       printf("%d",temp->data);
       temp=temp->next;
   }
   
   

    return 0;
}
