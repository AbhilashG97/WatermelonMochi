package parser;

import java.util.Scanner;

import exceptions.ParseException;

public class RecursiveDescentParser {
	
	private Scanner scanner;
	
	public RecursiveDescentParser(String input) {
		scanner = new Scanner(input);
		scanner.useDelimiter("\\s*");
	}
		
	public String getToken() throws ParseException {
		if(scanner.hasNext()) {
			return scanner.next();
		} else {
			throw new ParseException("No more tokens!");
		}
	}	
}
