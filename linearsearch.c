#include<stdio.h>

int linearsearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++)
        if (arr[i]==x)
        return i;
    return -1;           
}

int main(){

    int arr[]={12,0,45,23,756,3436,6};
    int x;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the value to be searched: ");
    scanf("%d",&x);

    int result= linearsearch(arr,n,x);

    if (result==-1)
    {
        printf("%d not found in the array\n",x);
    }
    else{
        printf("%d is found at the position %d\n",x,result);
    }
    

return 0;
}