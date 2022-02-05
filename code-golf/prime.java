import java.util.Scanner;
class prime {
    static boolean checkPrime(int n){
        for(int i = 2 ; i <= n/2 + 1 ; i++)
        if(n%i==0)
        return false;
        return true;
    }
    public static void main(String args[]){
        int n = new Scanner(System.in).nextInt();
        System.out.println(checkPrime(n));
    }
}