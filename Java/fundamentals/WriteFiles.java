package Lectures;
import java.io.FileWriter;
import java.io.IOException;

public class WriteFiles {
        public static void main(String[] args) {
            try {
            FileWriter myWriter = new FileWriter("filename.txt");
            myWriter.write("Files in Java might be tricky!");
            myWriter.close(); // close stream
            } catch (IOException e) {
                System.out.println("An error occurred.");
            }
        }
}
