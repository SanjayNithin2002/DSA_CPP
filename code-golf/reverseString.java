import java.util.Scanner;
class reverseString {
    static String reverseStr(String str){
        String[] temp =str.split(" ");
        for(int i = 0; i < temp.length;i++){
            temp[i] = new StringBuilder(temp[i]).reverse().toString();
        }
        return String.join(" ",temp);
    }
    public static void main(String args[]){
        String str = new Scanner(System.in).nextLine();
        System.out.println(reverseStr(str));
    }
}
