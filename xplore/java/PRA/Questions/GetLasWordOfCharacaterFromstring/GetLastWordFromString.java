package GetLasWordOfCharacaterFromstring;

public class GetLastWordFromString {
public static void main(String[] args) {

String s="Hello this is some one";
s+=" ";
for(int i=0;i<s.length();i++){
    if(s.charAt(i)==' '){
        System.out.print(s.charAt(i-1));
    }

}
}
}
