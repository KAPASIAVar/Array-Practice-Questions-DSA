/*Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
*/
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
