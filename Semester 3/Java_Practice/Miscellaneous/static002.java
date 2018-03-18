class static002
{
  static int counter = 0;
  
  static002 ()
  {
    counter ++;
    System.out.println(counter);
  }

  public static void main (String[] args)
  {
    static002 obj1 = new static002(), obj2 = new static002(), obj3 = new static002();
  }
}
