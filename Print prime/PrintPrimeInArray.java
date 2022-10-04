// Print prime numbers from an array.

import java.util.*;

public class PrintPrimeInArray {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.println("Enter array size");
      int n = input.nextInt();
      int[] arr = new int[n];
      for(int i=0; i<n; i++){
        arr[i]=input.nextInt();
      }
      primeInArray(arr);
  }   
  static void primeInArray(int[] arr){

    for(int i=0; i<arr.length; i++){
      if(isPrime(arr[i])){
        System.out.println(arr[i]+ "");
      }
    }
  }
  static boolean isPrime(int n){
    if(n<=1){
      return false;
    }
    int c=2;
    while(c*c <n){
      if(n%c ==0){
        return false;
      }
      c++;
    }
    
    return c*c >n;
  }
  
  
}