package Lectures;

//Example of managing threads in Java

public class Threads {
    public static void main(String[] args){
        System.out.println(Thread.currentThread().getName());
        for(int i=0; i<10; i++){
            new Thread("" + i){
                //instances of the class java.lang.Thread, or instances of subclasses of this class was created
                public void run(){
                System.out.println("Thread: " + getName() + " running");
                }
            }.start();
        }
    }
}
/*-----output-----
main
Thread: 1 running
Thread: 6 running
Thread: 2 running
Thread: 9 running
Thread: 4 running
Thread: 7 running
Thread: 5 running
Thread: 8 running
Thread: 3 running
Thread: 0 running
--------------------

thread 1 may not be the first thread to write its name to System.out.
This is because the threads are in principle executing in parallel and not sequentially.
 */