public class ReferenceInJava {

  public static void change(String str) {
    str = "another string";
  }

  public static void main(String[] args) {
    String str = "a string";

    System.out.println(str);

    change(str);

    System.out.println(str);

    // output
    // a string
    // a string
  }

}