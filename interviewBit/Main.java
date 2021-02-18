// import java.lang.*;
import java.util.*;

public class Main {
    public static int isBalanced(String str){
        int size = str.length();
        Stack<Character> s= new Stack<>();
        for(int i=0;i<size;i++){
            if(str.charAt(i) == ')'){
                if(s.empty()){
                    return 0;
                }
                char st = s.peek();
                s.pop();
                if(st != '('){
                    return 0;
                }
            }
            else{
                s.push(str.charAt(i));
            }
        }
        return (s.empty()) ? 1 : 0;
    }
    public static void main(String[] args) {
        // YOUR CODE GOES HERE
        // Please take input and print output to standard input/output (stdin/stdout)
        // DO NOT USE ARGUMENTS FOR INPUTS
        // E.g. 'Scanner' for input & 'System.out' for output
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        for(int i=0;i<n;i++){
            String str = sc.nextLine();
            System.out.println(isBalanced(str));
            
        }
        // String str = "(()";
        
        sc.close();
    }
}