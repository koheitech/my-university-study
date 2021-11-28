package Lectures;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter some text to be encrypted: ");
        String s1 =/ scan.nextLine();

        System.out.println(stringFormatting(s1));
    }


    public static String stringFormatting(String s1) {
        StringBuffer sb = new StringBuffer();

        /*
        The append() method of Java StringBuffer class is used to append the value to the current sequence.
        There are various overloaded append() methods available in StringBuffer class.
        These methods are differentiated on the basis of their parameters.
        */

        for (int i = 0; i < s1.length(); i++) {
            char c = s1.charAt(i);
            if (i % 2 == 0) {
                if(c==122){
                    c = (char) (c - 25);
                    sb.append(c);} //append method add some character or string to the Buffer
                else{
                    c = (char) (c + 1);
                    sb.append(c); }
            }
            else sb.append(c);
        } return sb.toString();
    }
}