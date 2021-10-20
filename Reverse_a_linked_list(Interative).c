#include"stdio.h"
#include"stdlib.h"
struct Node {
    int data;  //data of the node
    struct Node* next; //address of the next node
};
struct Node* head;
//Insert : struct Node* Insert(struct Node* head,int data)


  Node* temp2 = head;
  for(int i=0;i<n-2;i++) {
      temp2 = temp2 -> next;
  }
  temp1 ->next=temp2->next;
  temp2->next=temp1;
}
void Print() {
    struct Node* temp = head;
    printf("List is : \n");
    while(temp != NULL ) {
        printf("%d ",temp->data );
        temp=temp->next;

    }
    printf("\n");
}

struct Node* Reverse(struct Node* head) {
    struct Node  *temp, *prev,*current;
    current = head;
    prev=NULL;
    while(current != NULL) {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;
    return head;
}
int main() {
    struct Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    print(head);
    head=Reverse(head);
    print(head);
    

}