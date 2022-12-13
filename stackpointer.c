#include<stdio.h>
#include<malloc.h>

struct stack{
    int data;
    struct stack *next;
};

struct stack *top=NULL;

int display(){
    struct stack *head;
    head=top;
    while (head!=NULL)
    {
        printf("%d  \n",head->data);
        head=head->next;
    }
}

void push(){
    int val;
    printf("Accept val: ");
    scanf("%d",&val);

    struct stack* temp=(struct stack*)malloc(sizeof(struct stack));
    temp->data=val;
    temp->next=top;
    top=temp;
}
void pop(){
    int val;
    struct stack* temp;
    if (top!=NULL)
    {
        temp=top;
        val=temp->data;
        top=top->next;
        free(temp);
        printf("pop value: %d \n",val);
    }
    else{
        printf("Stack is empty\n");
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

