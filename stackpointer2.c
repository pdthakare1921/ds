#include<stdio.h>
#include<malloc.h>

struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
void display(){
    struct stack *head;
    head=top;
    while (head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
}

void push(struct stack **top){
    
    struct stack *temp;
    int val;
    printf("enter value pushed: ");
    scanf("%d",&val);
    temp=(struct stack*)malloc(sizeof(struct stack));

    temp->data=val;
    temp->next=*top;
    *top=temp;
}
void init(struct stack **top){
    *top=NULL;
}
void pop(struct stack **top){
    
    struct stack *temp;
    int val;
    if (*top==NULL)
    {
        printf("Stack is empty");
    }
    else{
        temp=*top;
        *top=*top->next;
        val=temp->data;
        free(temp);
        return (val);
    }    
}
void main(){
    top=NULL;
    int choice;
    printf("Stack operation:");
    while (choice!=4)
    {
        printf("1. push 2.pop 3. display 4.exit  ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("exit");
            break;

            default:
            printf("entr valid choice:\n");
        }
    }    
}
