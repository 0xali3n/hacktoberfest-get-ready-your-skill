//Reversing an array by swapping start and end element using JAVA.

import java.util.*;

public class ReverseArrayAlgorithm {
    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.println("Enter size of array");
      int n = in.nextInt();
      int[] arr = new int[n];
      for(int i=0; i<n; i++){
        arr[i]=in.nextInt();
      }
      reverseArr(arr);
      System.out.println(Arrays.toString(arr));
  }
  
  static void swap(int[] arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b]= temp;
  }
  
  static void reverseArr(int[] arr){
    int start =0;
    int end = arr.length -1;
    while(start<end){
      swap(arr,start,end);
      start++;
      end--;
    }
  }
}