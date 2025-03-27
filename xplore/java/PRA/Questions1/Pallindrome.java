package Questions1;

public class Pallindrome {
    // Online Java Compiler
// Use this editor to write, compile and run your Java code online

    public static void main(String[] args) {
     int n=123216;
     int m=n;
     int res=0;
     String s="";
     while(m!=0){
         int rem=m%10;
         s+=rem;
         res=(res*10)+rem;
         m=m/10;
     }
    //  int res=Integer.parseInt(s);
System.out.println(res==n);
    }

}
