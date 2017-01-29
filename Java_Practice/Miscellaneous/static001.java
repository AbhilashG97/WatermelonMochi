class static001
{
  int roll;
  String name;
  static String college = "god";
  static001 (int r, String n)
  {
    roll =r;
    name =n;
  }
  void display ()
  {
    System.out.println(roll+" "+name+" "+ college);
  }

  public static void main (String[] args)
  {
    static001 obj1 = new static001(56,"Jack"), obj2 = new static001(78,"Lucy");

    obj1.display();
    obj2.display();
  }
}
