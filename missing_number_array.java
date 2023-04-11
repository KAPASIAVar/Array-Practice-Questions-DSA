import java.util.Arrays;

public class april11_1_2023 {
    public static int MissingNumber(int array[], int n) 
    {

        // Time Complexity = O(N*log(n))

        Arrays.sort(array);
        for (int i = 0; i < n - 1; i++) {
            if (array[i] != i + 1) {
                return i + 1;
            }
        }
        return 0;
    }

    public static int Missing_num(int arr[], int n) {
        int sum = (n) * (n + 1) / 2; // Time Complexity = O(n)
        for (int i = 0; i < n - 1; i++) {

            sum = sum - arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {
        int arr[]={ 1, 2, 3, 5 };
        System.out.println(MissingNumber(arr, 5));
        
    }

}
