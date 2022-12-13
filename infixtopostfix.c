#include<stdio.h>
#include<ctype.h>

char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;
}
char pop(){
    if (top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char x){
    if(x=='(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}



































/*
# include <stdio.h>
#include<ctype.h>


struct stack{
	char data[10];
	int top;
};

int init(struct stack *s){
	s->top=-1;
}

int top(struct stack *s){
	return s->data[s->top];
}

int isEmpty(struct stack *s){
	if(s->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct stack *p){
	if(p->top == 9){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct stack *p, char val){
	if(isFull(p)){
		printf("The stack is already full.");
	}
	else{
		p->top++;
		p->data[p->top] = val;
	}
}

char pop(struct stack *p){
	if(isEmpty(p)){
		printf("Stack is already empty.");
		return -1;
	}
	else{
		char val = p->data[p->top];
		p->top--;
		return val;
	}
};

int priority(char x){
	if(x=='('){
		return 0;
	}
	else if(x=='+' || x=='-'){
		return 1;
	}
	else if(x=='*' || x=='/'){
		return 2;
	}
	else if(x=='%'){
		return 3;
	}
	else if(x=='^'){
		return 4;
	}
	else{
		return -1;
	}
}

void infixToPostfix(char infix[], char post[]){
	struct stack s;
	char x, token;
	init(&s);
	int i = 0;
	
	for(i=0; infix[i]!='\0'; i++){
		token = infix[i];
		
		if(isalnum(token)){
			post[i++] = token;
		}
		else if(token == '('){
			push(&s, token);
		}
		else if(token == ')'){
			while(pop(&s) != '('){
				post[i++]=pop(&s);
			}
		}
		else{
			while(priority(token)<=priority(top(&s)) && !isEmpty(&s)){
				post[i++] = pop(&s);
				push(&s, token);
			}
		}
	}
	while(!isEmpty(&s)){
		post[i++] = pop(&s);
	}
	post[i]='\0';
}

int main(){
	char infix[10]="a+b";
	char post[10];
	
	infixToPostfix(infix[10], post[10]);
	
}
*/