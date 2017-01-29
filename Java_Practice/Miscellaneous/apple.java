class apple
{
  int roll;
  String name;

  void banana (int roll, String name)
  {
    this.roll = roll;
    this.name = name;
  }

  void display ()
  {
    System.out.println(roll + " " + name);
  }

  public static void main (String[] args)
  {
    apple obj1 = new apple();

    obj1.banana(35, "Garlic");
    obj1.display();
  }
}
