//C Programming Code for the Sum & Avg of a 1D Array

#include<stdio.h>

void readArray(int[],int);
void displayArray(int[],int);
int sumArray(int[],int);

int main()
{
int n,s ;
double avg;
int arr[100];
printf("Enter the size of Array: ");
scanf("%d",&n);
printf("Enter the elements of array: \n");
readArray(arr,n);
s=sumArray(arr,n);
printf("The Sum of Array is : %d\n",s);
avg=(double)s/n;
printf("The Avarage of Array is : %lf\n",avg);

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

int sumArray(int arr[],int n)
{
int i, sum=0;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
return sum;
}

/* OUTPUT:
Enter the size of Array: 3
Enter the elements of array:
2
6
5
The Sum of Array is : 13
The Avarage of Array is : 4.333333
Process returned 0 (0x0) execution time : 5.086 s
Press any key to continue.*/
