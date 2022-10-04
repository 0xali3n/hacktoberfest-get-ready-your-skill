// Anagram check in JAVA.

import java.util.*;

public class StringAnagramCheck {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      String str1 = input.next();
      String str2 = input.next();
      System.out.println(isAnangram(str1,str2));
  }   
  
  static boolean isAnangram(String s1, String s2){
    char[] arr1 = s1.toCharArray();
    char[] arr2 = s2.toCharArray();
    
    Arrays.sort(arr1);
    Arrays.sort(arr2);
    
    return Arrays.equals(arr1,arr2);
  }
  
}