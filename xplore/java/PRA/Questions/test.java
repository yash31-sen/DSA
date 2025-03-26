import java.util.*;
public class test {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();
    
        String[] arr = { "1", "2", "3", "4", "4", "1" ,"1" ,"1" };
   for(String s:arr){
    if(map.containsKey(s)){
        map.put(s,map.get(s)+1);

    }
    else{
        map.put(s,1);
    }
   }
        System.out.println(map);
        map.forEach((k,v)->{if(v>1)System.out.println(k);});
    }
}