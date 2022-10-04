// String palindrome check in JAVA.

import java.util.*;

public class StringPalindromeCheck {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.println("Enter string ");
      String str = input.next();
      System.out.println(isPalindrome(str));
  }   
  
  static boolean isPalindrome(String s){
    int start = 0;
    int end = s.length()-1;
    while(start<=end){
      if(s.charAt(start)!=s.charAt(end)){
        return false;
      }else{
        start++;
        end--;
      }
    }
    return true;
  }
  
}