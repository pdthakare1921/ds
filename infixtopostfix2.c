#include<stdio.h>
#define MAX 100
struct stack{
    char data[MAX];
    int top;
};

void infixtopostfix(char infix[],char postfix[]){
    struct stack s;
    char s,token;
    int x,j=0;
    init(&s);

    for (int i = 0; infix[i]!='/0';i++)
    {
        token=infix[i];
        if (isalnum(token))
        {
            postfix[j++]=token;
        }
        else if (token=='(')
        {
            push(&s,token);
        }
        else if (token==')')
        {
            while (x=pop(&s)!='(')
            {
                postfix[j++];
            }
        }
        else{
            while (priority(token<=priority(top(&s))))
            {
                postfix[j++]=pop(&s);
                push(&s,token);
            }
            }
        }   
        while(!empty(&s)){
            postfix[j++]=pop(&s);
        }
    postfix[j]='\0';
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

int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    


}
