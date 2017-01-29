class red
{
  void a ()
  {
    for (int i =1; i < 5; i++)
    {
      System.out.println("\n");
      for (int j = 0; j<i; j++)
      {
        System.out.print("*");
      }
    }
  }

  void b ()
  {
    this.a();
    System.out.println("\n"+"This is another method");
  }

  void c (int roll, String name)
  {
    this.b();
    System.out.println(roll + " " + name);
  }

  public static void main (String[] args)
  {
    red obj1 = new red();
    obj1.c(25, "At least you tried.");
  }
}
