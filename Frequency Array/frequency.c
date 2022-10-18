//Frequency Of 1D Array

#include<stdio.h>

void readArray(int[],int);
int linear(int A[],int n,int key);

int main()
{
int n,occ,key;
int arr[100];
printf("Enter the size of Array: ");
scanf("%d",&n);
printf("Enter the elements of array: \n");
readArray(arr,n);
printf("Enter the elements to be searched in array: \n");
scanf("%d",&key);
occ=linear(arr,n,key);
printf("Search is successful!!!\n");
printf("Occurannce=%d\n",occ);

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
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}

int linear(int arr[],int n,int key)
{
int i,occ=0;

for(i=0;i<n;i++)
{
if(key==arr[i])
{
occ++;
}
}
return(occ);
}

/* Output;
Enter the size of Array: 8
Enter the elements of array:
5
6
5
2
4
8
5
3
Enter the elements to be searched in array:
5
Search is successful!!!
Occurannce=3
