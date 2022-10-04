//Algorithm to find Minimum and Maximum element in an array in JAVA.

import java.util.*;

public class MinMaxArrayAlgorithm {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.println("Enter size of the array");
      int n = input.nextInt();
      int[] arr = new int[n];
     
      for(int i=0; i<n; i++){
        arr[i]=input.nextInt();
      }
      
      System.out.println("Maximum element : "+ findMax(arr));
      System.out.println("Minimum element : "+ findMin(arr));
  }
  static int findMax(int[] arr){
    int max = 0;
    for(int i=0; i<arr.length; i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    return max;
  }
  static int findMin(int[] arr){
    int min = arr[0];
    for(int i=1; i<arr.length; i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    return min;
  }
}