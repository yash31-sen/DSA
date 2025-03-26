package NumberPrimeOrNot;

public class Prime {
public static void main(String[] args) {
    int n=112;
    boolean flag=true;
    if(n==0 || n==1){
        flag=false;
    }
    if(n==2){
        flag=true;
    }
    else{
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
        }
    }
}
    if (flag) {
        System.out.println("yes");
    }
    else{
        System.out.println("no");
    }
}
}