#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>



struct node{
  int data;
  struct node *next;
};


void display(struct node *head){
  struct node*p = head;
  printf("The linked list is: ");
  while(p!=NULL){
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}



struct node * createnode(struct node *head){
  
  int data;
  printf("Enter the element: ");
  scanf("%d", &data);
  struct node *p = (struct node *) malloc(sizeof(struct node));
  p -> data = data;
  p -> next = NULL;
  struct node * ptr;
  
  if(head == NULL){
    head = p;
    ptr = head;
    return head;
  }
  else{
    ptr -> next=p;
    ptr = p;
    return head;
  }
}


struct node * delete(struct node *head, int index){
  struct node *p = head;
  struct node *q = head -> next;
  if(index==0){
    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
  }
  else{
  for(int i = 0; i<index-1; i++){
    p = p -> next;
    q = q -> next;
  }
  p -> next = q -> next;
  free(q);
  return head;
  }    
}

struct node *insert(struct node *head,int data, int index){
  struct node *ptr = (struct node * ) malloc(sizeof (struct node));
  struct node *p = head;
  int i = 0;
  
  if(index == 0){
    struct node *ptr = (struct node * ) malloc(sizeof (struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
  }
  else{
  while(i!=index-1){
    p=p->next;
    i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  p->next=ptr;
  return head;
  }
}


int main(){
  
  int n,i,ch,a;
  printf("Enter the no. of nodes you want in Linked List: ");
  scanf("%d", &n);
  struct node*head=NULL;
  for (int i=0; i<n; i++){
    head = createnode(head);
  }
  display(head);

  do{
  printf("\n");
  printf("Select an operation : \n");
  printf("1.Insert an Element\n");
  printf("2.Delete an Element\n");
  scanf("%d",&ch);
  
  if(ch == 1){
    int data, index;
    printf("Enter element: ");
    scanf("%d", &data);
    printf("Enter index no. at which you want to insert '%d' : ", data);
    scanf("%d", &index);
    head = insert(head,data,index);
    display(head);
    printf("\n");
  }
  else{
    int index;
    printf("Enter index no. of the element you want to delete: ");
    scanf("%d", &index);
    head = delete(head,index);
    display(head);
    printf("\n");
  }
  printf("If you want to perform more operation then press '1'. ");
  scanf("%d", &a);
  }while(a == 1);
}