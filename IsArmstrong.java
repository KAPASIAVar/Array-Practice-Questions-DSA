import java.util.*;
public class Main {
	public static boolean CheckArm(int n){
		int ans=0;
		int x=n;
		int count=0;
		while(x!=0){
			count++;
			x/=10;
			
		}
		int y=n;
		while(y!=0){
			ans+=Math.pow(y%10,count);
			y/=10;
		}
		if(n==ans){
			return true;
		}
		else return false;
	}
    public static void main(String args[]) {
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		if(CheckArm(n))System.out.print("true");
		else System.out.print("false");
		

    }
}
