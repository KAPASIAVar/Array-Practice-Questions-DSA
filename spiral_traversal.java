import java.util.Scanner;
public class spiral_traversal {
    public static void print(int arr[][] ,int m,int n){
        int start_row=0;
        int start_col=0;
        int i;
        while(start_row<m && start_col<n){
            for(i=start_col;i<n;i++ ){
                System.out.print(arr[start_row][i]+", ");
            }
            start_row++;
            for(i=start_row;i<m;i++)System.out.print(arr[i][n-1]+", ");
            n--;
            if(start_row<m){
                for(i=n-1;i>=start_col;i--)System.out.print(arr[m-1][i]+", ");
                m--;
            }
            if(start_col<n){
                for(i=m-1;i>=start_row;i--)System.out.print(arr[i][start_col]+", ");
                start_col++;
            }
        }
        System.out.print("END");
        
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int arr[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)arr[i][j]=sc.nextInt();
        }
        
        print(arr,m,n);

    }
    
}
