package Lectures;
import java.util.Scanner;
/*
 import java.util.Scanner; // This will import just the Scanner class
 import java.util.*; // This will import the entire java.util package
 */

//this is for understanding Scanner class

public class Scanner_study {
    public static void main(String[] args) {
        // Scannerクラスのインスタンスを作成
        // 引数で標準入力System.inを指定する
        Scanner s = new Scanner(System.in);
	    /*
	     Here, by writing Scanner s, we are declaring s as an object of Scanner class.
	     System.in within the round brackets tells Java this will be System Input
	     i.e. input will be given to the system.
	     */

        // 入力を促すメッセージ
        System.out.print("入力してください > ");

        //入力された内容をインスタンスから取得
        String input_text = s.nextLine();
	    /*
	     Methods - Inputs

		nextInt() - Integer

		nextFloat() - Float

		nextDouble() - Double

		nextLong() - Long

		nextShort() - Short

		next() - Single word

		nextLine() - Line of Strings

		nextBoolean() - Boolean
	     */

        //入力された内容を画面に表示
        System.out.println(input_text + "が入力されました");

        // Scannerクラスのインスタンスをクローズ
        s.close();

    }

}
