#include<stdio.h>
#include<conio.h>

struct student
{
    char name[100];
    int roll_no;
    int total_marks;
};

void input_data(struct student data[100],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of student %d \n",i+1);
        printf("Enter roll no: ");
        scanf("%d",&data[i].roll_no);

        printf("Enter name: ");
        scanf("%s",data[i].name);
        //gets(data[i].name);//

        printf("Enter total marks: ");
        scanf("%d",&data[i].total_marks);      
    }
}

void bubblesort(struct student data[100],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (data[j+1].roll_no < data[j].roll_no)
            {
                struct student temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }            
        }        
    }
}


void quicksort(struct student data[100],int first, int last){
    int pivot,i,j,temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;

        while (i<j)
        {
            while(data[i].roll_no <= data[pivot].roll_no) i++;
            while(data[j].roll_no > data[pivot].roll_no) j--;
            
            if (i<j)
            {
                struct student temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }            
        }
        struct student temp=data[pivot];
        data[pivot]=data[j];
        data[j]=temp;
        quicksort(data,first,j-1);
        quicksort(data,j+1,last);
    }
}

int main(){
    struct student data[100];
    int n,choice,a;
    printf("Enter the number of records: ");
    scanf("%d",&n);
    
    input_data(data,n);
    
    printf("To sort using bubblesort select 1 \n To sort using quicksort select 2\n");
    scanf("%d",&choice);
    
    if (choice==1)
    {
        bubblesort(data,n);
    }
    else if (choice==2)
    {
        quicksort(data,0,n-1);
    }
    else{
        printf("invalid choice\n");
    }  
    printf("After sorting:\n");    
    printf("\n\nRollNo\tName\tTotal Marks\n");
    for (int i = 0; i < n; i++)
    {    
        printf("%d\t%s\t%d\n",data[i].roll_no,data[i].name,data[i].total_marks);
    }    
}