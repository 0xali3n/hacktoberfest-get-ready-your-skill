//Algorithm to find target element in array using linear search in JAVA.

import java.util.*;

public class LinearSearchAlgorithm {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.println("Enter size of the array");
      int n = input.nextInt();
      int[] arr = new int[n];
     
      for(int i=0; i<n; i++){
        arr[i]=input.nextInt();
      }
      System.out.println("Enter target to search");
      int target = input.nextInt();
      
      System.out.println(linearSearch(arr,target));
  }
  static boolean linearSearch(int[] arr, int target){
    for(int i=0; i<arr.length; i++){
      if(arr[i]==target){
        return true;
      }
    }
    return false;
  }
}