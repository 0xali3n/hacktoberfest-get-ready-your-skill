//Inserting no. in 1D Array

#include<stdio.h>
void readArray(int[],int);
void insert(int A[],int n);
int main()
{
int n,occ,key;
int arr[100];
printf("Enter the size of Array: ");
scanf("%d",&n);
printf("Enter the elements of array: \n");
readArray(arr,n);
insert(arr,n);
}
void readArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
void displayArray(int arr[],int n)
{
int i;
for(i=0;i<n+1;i++)
{
printf("%d ",arr[i]);
}
}
void insert(int arr[],int n)
{
int i,j,pos,value;
printf("Enter the position index : ");
scanf("%d",&pos);
printf("Enter the value into that position: ");
scanf("%d",&value);
for(i=n-1;i>=pos-1;i--)
arr[i+1]=arr[i];
arr[pos-1]= value;
printf("Final array after inserting the value is\n");
displayArray(arr,n);}
