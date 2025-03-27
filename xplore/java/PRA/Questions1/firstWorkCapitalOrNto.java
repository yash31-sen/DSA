package Questions1;

public class firstWorkCapitalOrNto {
   
    public static void main(String[] args) {
  String s="yash sen is my Name";
  String arr[]=s.split(" ");
        for(String i:arr){
          if((Character.toUpperCase(i.charAt(0)))==i.charAt(0)){
              System.out.println("yes");
              System.out.println(i);
          }
        }
    }

}
