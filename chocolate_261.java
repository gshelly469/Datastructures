import java.util.Arrays;
// import java.util.Collections;

class chocolate_261{
    public static void main(String args[]){
        int per = 3;
        int num = 7;
        Integer[] arr = {7, 3, 2, 4, 9, 12, 56};
        Arrays.sort(arr);

        int min = Integer.MAX_VALUE;

        for (int i = 0; i <= num-per; i++){
            if (min > arr[i+per-1] - arr[i]){
                min = arr[i+per-1] - arr[i];
            }
            
            System.out.println(arr[i]);
        }
        System.out.println("testing");
        System.out.println(min);
    }
}