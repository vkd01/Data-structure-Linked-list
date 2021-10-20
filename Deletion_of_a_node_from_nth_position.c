#include"stdio.h"
#include"stdlib.h"
struct Node {
    int data;
    struct Node* next;
};
struct Node* head; //Global
void Insert(int n); //Insert an integer at the end of the list
void Print(); 
// DELETE NODE AT THE nth position
void Delete(int n)  {
  struct Node* temp1 = head;
  if(n==1) {
      head=temp1->next;
      free(temp1);
      return;
  }
   
  int i;
  for(i=0;i<n-2;i++) {
      temp1=temp1->next;
      //temp1 points to  (n-1)th node
      struct node* temp2=temp1->next; //nth node
      temp1 -> next = temp2->next; //(n+1)th node
      free(temp2); 
  }
}
int main () {
    head = NULL; //=> Empty list
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(3);
    Print();
    int n;
    printf("Enter a position\n");
    scanf("%d",&n);
    Delete(n);
    Print();
}
