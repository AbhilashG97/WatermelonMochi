class cherry
{
  void callMe (cherry obj)
  {
    System.out.println("ha a a a a a");
  }

  void meow ()
  {
    callMe(this);
  }

  public static void main(String[] args)
  {
    cherry obj1 = new cherry();
    obj1.meow();
  }
}
