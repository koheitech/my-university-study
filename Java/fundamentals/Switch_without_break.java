package Lectures;

// this is for understanding switching without break called 'fall though'

public class Switch_without_break {
    public static void main(String[] args) {

        int num = 1;

        switch (num){
            case 1:
                System.out.print("スープ、デザート付き");
            case 2:
                System.out.println("麻婆豆腐");
        }

    }
	/*
	 fall thoughと呼ばれる手法で、
	 num = 1 => case1&2
	 num = 2 => case2 only
	 というふうに、Caseを２つ行うことができる手法
	 */
}
