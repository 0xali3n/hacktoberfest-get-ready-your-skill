//Modular C program for finding the maximum and minimum element of an array(1D)
#include<stdio.h>
#include<stdlib.h>
void read(int arr[],int n)
{
    int i;
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
int maxarr(int arr[],int n)
{
    int i,max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int minarr(int arr[],int n)
{
    int i,min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int main()
{
    int arr[25],n,max,min;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    if(n<1||n>25)
    {
        printf("\nThe number of elements should be within 1 to 25 (inclusive)");
        exit(0);
    }
    read(arr,n);
    max=maxarr(arr,n);
    min=minarr(arr,n);
    printf("\nThe maximum element=%d\nThe minimum element=%d",max,min);
    return 0;
}
