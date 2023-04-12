import java.util.*;
public class Main {
    public static void main(String args[]) {
		int m,n;
		Scanner sc=new Scanner(System.in);
		m=sc.nextInt();
		n=sc.nextInt();
		int arr[][]=new int[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				for(int j=0;j<m;j++){
					System.out.print(arr[j][i]+", ");
				}
				
			}
			else {
				for(int j=m-1;j>=0;j--){
					System.out.print(arr[j][i]+", ");
				}
			}
		}
		System.out.print("END");

    }
}
