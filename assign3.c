#include<stdio.h>
char stack[5];
int choice;

int main(){
    int n,i=0;
    do
    {
        printf("Press 0 to move to the next room or press 9 to go back to the previous room: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 0:
        
        while (i<5)
        {
            printf("You are in room no. %d\n",i+1);
            i++;
            break;
        }
        break;
            
        case 9:
        for (int j =i-1; j >=0; j--)
        {
            printf("You are in Room no. %d\n",j);
            break;
        }
        break;

        
        default:
        printf("invalid choice\n");
       
        break;
        }
           
     printf("Press 1 to continue: ");
     scanf("%d",&n);
    
    } while (n==1);
    
return 0;   
}
/*
 if (choice==0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("You are in Room no. %d\n",stack[i+1]);
            break;
        }
    }
    else{
        for (int i =4; i >=0; i--)
        {
            printf("You are in Room no. %d\n",stack[i]);
            break;
        }
    }
*/