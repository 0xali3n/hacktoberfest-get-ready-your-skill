//Reversing a String in JAVA.

import java.util.*;

public class ReverseStringAlgorithm {
    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      System.out.println("Enter string");
      String str = in.next();
      
      System.out.println(reverseString(str));
      
  }

  
  static String reverseString(String str){
    
    char ch[] = str.toCharArray();
    String temp="";
    
    for(int i=ch.length-1;i>=0;i--){  
        temp+=ch[i];  
    }  
    return temp;
  }
}