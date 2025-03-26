interface Bicycle{
    int a1=0;
    void applyBrake(int dec);
    void speedUp(int inc);
}
class Avon implements Bicycle{
  public  void applyBrake(int dec){
        System.out.println(dec);
    }
  public  void speedUp(int dec){
        System.out.println(dec);
    }
}
public class InterfacesFile {
public static void main (String[] args){
    Avon a=new Avon();
    a.applyBrake(5);
    System.out.println(a.a1);
}
}