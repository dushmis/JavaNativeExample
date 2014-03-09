public class Abc{
  static{
    System.out.println("static call");
  }
  public Abc(){
    System.out.println("constructor call");
  }
  public void method1(int i){
    System.out.println("method call,  pass = "+i);
  }
}
