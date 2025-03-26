package ReverseString;

public class ReverseString {
public static void main(String[] args) {
    String s="hell";
    String rev="";
    for(int i=0;i<s.length();i++){
    rev+=s.charAt(s.length()-1-i);
    }
    System.out.println(rev);
    System.out.println(s.length());
}
}