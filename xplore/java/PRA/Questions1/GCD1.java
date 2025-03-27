package Questions1;

public class GCD1 {
    public static void main(String[] args) {
        int n=36, m=48;
        for(int i=Math.max(n,m);i>=0;i--){
            if(n%i==0 && m%i==0){
                System.out.println("yes");;
                break;
            }
        }
    }
}
