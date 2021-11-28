package Lectures;

//Creating and starting threads in Java

class MyThread extends Thread {
    public void run() {
        System.out.println("MyThread running"); }
}
class MyRunnable implements Runnable { public void run() {
    System.out.println("MyRunnable running"); }
}

public class Threads2 {
    public static void main(String args[]){
        //1st. create a subclass of Thread and override the run() method
        MyThread myThread = new MyThread();
        myThread.start();

        //2nd. pass an object that implements Runnable (java.lang.Runnable) to the Thread constructor
        Runnable runnable = new MyRunnable();
        Thread thread = new Thread(runnable);
        thread.start();
    }
}
