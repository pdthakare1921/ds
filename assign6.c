#include<stdio.h>
#include<stdlib.h>

struct node{
    int vertex;
    struct node *next;
};

struct node *A[10];

void bfs(struct node *A[], int n){
    struct node *p;
    int visited[10],v;
    for(v=0;v<n;v++){
        visited[v]=0;
    }

    printf("Enter start vertex: ");
    scanf("%d",&v);
    enqueue(v);
    visited[v]=1;
    while(!emptyqueue()){
        v=dequeue();
        printf(" %d",v);
        p=A[v];
        while(p!=NULL){
            if(visited[p->vertex]==0){
                enqueue(p->vertex);
                visited[p->vertex]=0;
            }
            p=p->next;
        }
    }
}

void init(struct node *A[], int n){
    int i;
    for(i=1;i<=n;i++){
        A[i]=NULL;
    }
}

void create(struct node *A[]){
    struct node *new,*p;
    int v1,v2;
    char ch;
    do{
        printf("Enter edge");
        scanf("%d%d",&v1,&v2);
        new = (struct node*)malloc(sizeof(struct node));
        new->vertex = v2;
        p=A[v1];
        if(p==NULL){
            A[v1]=new;
        }
        else{
            while(p->next!=NULL)
                p=p->next;
                p->next = new;
        }

        new = (struct node *)malloc(sizeof(struct node));
        new->vertex = v1;
        p=A[v2];
        if(p==NULL){
            A[v2]=new;
        }
        else{
            while(p->next!=NULL)
                p=p->next;
                p->next = new;
        }

        printf("Do you want to add more edges? (y/n)");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}

int main(){
   // struct circularQueue q;
    int n;
    printf("\n Enter number of vertex: ");
    scanf("%d",&n);
    init(A,n);
    create(A);
    bfs(A,n);
}



























































             




/*
#include<stdio.h>
#include<stdlib.h>

struct node{
    int vertex;
    struct node *next;
}

struct node *A[10];

void bfs(struct node *A[], int n){
    int visited[10],struct node *P;
    for (v = 0; v < n; v++)
        visited[v]=0;

    printf("Enter start vertex: ");
    scanf("%d",&v);
    Enqueue(v);
    visited[v]=1;
    
    while (!Emptyqueue())
    {
        v=Dequeue();
        printf("%d",v);
        P=A[v];
        while(P!=NULL)
        {
            if (visited[P->vertex]==0)
            {
                Enqueue(P->vertex);
                visited[P->vertex]=0;
            }
            P=P->next;
        }
    }
}


void init(struct node *A[], int n){
    int i;
    for ( i = 1; i <= n; i++)
       A[i]=NULL;
}

void create(struct node *A[]){
    struct node *new,P;
    do
    {
        printf("Enter edge: ");
        scanf("%d %d",&v1,&v2);
        new=(struct node*)malloc(sizeof(struct node));
        new->vertex=v2;
        P=A[v1];
        if(P==NULL)
        head[v1]=new;
        else{
            while (P->next!=NULL);
            P=P->next;
            P->next=new;
        }   

        new=(struct node*)malloc(sizeof(struct node));
        new->vertex=v1;
        P=A[v2];
        if(P==NULL)
        A[v2]=new;
        else{
            while (P->next!=NULL);
            P=P->next;
            P->next=new;
        }

        printf("Wnats to add more edges(y/n): ");
        scanf("%c",&ch);   
             
    }while(ch=='y'||ch='Y');     
}


int main(){
    int n;
    printf("Enter no. of vertex: ");
    scanf("%d",&n);
    init(A,n);
    create(A);
    bfs(A,n);
}
*/
