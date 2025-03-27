package Questions1;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class ReverseArrayAndConvertArrayToList {
        public static void main(String[] args) {
  Integer[] arr={1,2,3,4,5,6,8,9,45,-2,-2,0,8,-9};
  Arrays.sort(arr);
  List<Integer> a=Arrays.asList(arr);
  Collections.reverse(a);
  for(int i=0;i<a.size();i++){
        System.out.println(arr[i]);
  }

        
        
    }
}
