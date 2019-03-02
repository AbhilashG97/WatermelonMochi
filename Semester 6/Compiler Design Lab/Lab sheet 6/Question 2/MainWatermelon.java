import java.io.*;

public class MainWatermelon {
	public static void main(String[] args) throws Exception{
		parser p = new parser(new Yylex(new FileReader("input.dat")));
		p.parse();
	}
}