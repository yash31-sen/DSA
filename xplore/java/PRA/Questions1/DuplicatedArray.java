package Questions1;
import java.util.*;
public class DuplicatedArray {
 
    public static void main(String[] args) {
     int[] arr={3,2,5,3,2,2,2,21,0,1,1,1};
     Map<Integer,Integer> mp=new TreeMap<>();
     for(int i=0;i<arr.length;i++){
         mp.put(arr[i], mp.getOrDefault(arr[i], 0) + 1);
     }
     
     for(Map.Entry<Integer, Integer> e: mp.entrySet()){
         System.out.println(e.getKey()+" "+e.getValue());
     }
    
}
}
