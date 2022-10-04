#include <stdio.h>
#include <stdlib.h>
void reversing_an_array(int arr[], int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

/* function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main(){
    int i, n;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array : ");
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Entered array is : ");
	printArray(arr, n);
	printf("\n");
	reversing_an_array(arr,n);
	printf("Reversed array is : ");
	printArray(arr, n);
    return 0;
}
