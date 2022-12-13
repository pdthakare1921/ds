#include<stdio.h>

int binarysearch(int arr[],int low,int high, int x){
    while (low<=high)
    {
        int mid=low+(high-low)/2;

        if (arr[mid]==x)
        return mid;

        if (arr[mid]<x)
        low=mid+1;

        else
        high=mid-1;    
    }
    return -1;    
}

int main(){
    int arr[]={23,5435,3423,1,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the the element to be searched: ");
    scanf("%d",&x);

    int result=binarysearch(arr,0,n-1,x);

    if (result==-1)
    
        printf("%d not found in the array\n",x);
    
    else
        printf("%d is found at the positon %d",x,result);
    
return 0;
}