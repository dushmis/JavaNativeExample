public class NativeExample{
  static{
    System.loadLibrary("NativeExample");
  }
  public static void main(String... args){
    // System.out.println(System.getProperty("java.library.path"));
    NativeExample exam=new NativeExample();
    exam.callMe();
    exam.printf("Hi from c++");
  }

  public native void callMe();
  public native void printf(String print);
}
