package Lectures;
import java.util.*;

//how to use hasNext* method in Scanner
public class HasNext_method {
        public static void main(String[] args) {
            //Initialize the scanner
            Scanner scan = new Scanner("55 B3 -25 -7 1D");
            while(scan.hasNext()){
                //If the next is a int, print found and the int with radix 16
                if (scan.hasNextInt()) {
                    System.out.println("Found :" + scan.nextInt(16));
                }
                //If no int is found, print "Not Found" and the token
                System.out.println("Not Found :" + scan.next());
            }
            scan.close();
    }
}
