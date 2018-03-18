class thisIs
{
  thisIs ()
  {
    System.out.println("This is a constructor.");
  }

  thisIs (int roll, String name)
  {
    this();
    System.out.println(roll + " " + name);
  }

  public static void main(String[] args)
  {
    thisIs obj1 = new thisIs(25, "Ginger");
  }
}
