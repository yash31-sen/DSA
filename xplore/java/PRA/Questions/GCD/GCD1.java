package Questions.GCD;

public class GCD1 {
    public static void main(String[] args) {
        int n1 = 45;
        int n2 = 18;
      for(int i=Math.max(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
            System.out.println(i);
            break;
        }
      }
    }
}
