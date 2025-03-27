package Questions1;

public class CNtWordInString {
    // Online Java Compiler
// Use this editor to write, compile and run your Java code online


    public static void main(String[] args) {
   String s="hello this is yash sen";
   
   String[] arr=s.split(" ");
   String ans="";
   
   for(String i: arr){
       System.out.println(i);
       ans+=i;
   }
   System.out.println(ans);
    }
}
