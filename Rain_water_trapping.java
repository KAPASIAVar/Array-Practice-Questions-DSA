import java.util.*;
public class Main {
	public static void solve(int arr[]){
        int left[]=new int[arr.length];
        int right[]=new int[arr.length];
        int maxi=arr[0];
        for(int i=0;i<arr.length-1;i++){
            maxi=Math.max(maxi, arr[i]);
            left[i]=maxi;

        }
        int maxii=arr[arr.length-1];
        for(int i=arr.length-1;i>=0;i--){
            maxii=Math.max(maxii, arr[i]);
            right[i]=maxii;


        }
        int ans=0;
        for(int i=0;i<arr.length-1;i++){
            ans+=Math.min(left[i],right[i])-arr[i];
        }
        System.out.println(ans);
    }
    public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		int x=sc.nextInt();
		for(;;){
			if(x==0)break;
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
			arr[i]=sc.nextInt();
		}
		solve(arr);
		x--;
		}

    }
}
