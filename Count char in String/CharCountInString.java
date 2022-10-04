// Counting characters of a string in JAVA.

import java.util.*;

public class CharCountInString {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.println("Enter a string");
      String str = input.next();
      System.out.println("Total characters : "+charCount(str));
  }   
  
  static int charCount(String s){
    char[] arr = s.toCharArray();
    return arr.length;
  }
  
}