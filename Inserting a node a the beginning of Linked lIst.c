#include"stdlib.h"
#include"stdio.h"
#define loop(x) for(int i=0;i<x;i++)
struct Node {
    int data;
    struct Node* next;
};
struct Node* head; //global variable

void Insert(int x){
    struct Node* temp = (Node* ) malloc (sizeof(struct Node));
    (*temp).data=x;  // temp->data=x;
    temp->next =NULL;
    if(head != NULL) temp -> next = head;
    head=temp;
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

int main() {
 head=NULL; //Empty  list
 printf("How many Numbers ?\n");
 int n,x;
 scanf("%d",&n);
 loop(n) {
     printf("Enter the number \n");
     scanf("%d",&x);
     Insert(x);
     Print();
 }
 return 0;
}