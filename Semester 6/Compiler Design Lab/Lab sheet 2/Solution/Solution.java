import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.regex.*;
import java.util.stream.Collectors;
import java.nio.file.*;

public class Solution {

    public void isIdentifier(String input) {
    
        Scanner scanner = new Scanner(input);
        scanner.useDelimiter("\\s");
        String token = "";
        while(scanner.hasNext()) {
            token = scanner.next();
            if(Pattern.compile("[a-zA-Z][a-zA-Z0-9]{0,30}").matcher(token).matches()) {
                System.out.println(token + " : true");
            } else {
                System.out.println(token + " : false");
            }
        }
        scanner.close();
    }

    public void isFunction(String input) {
        
        String regex = "(public|private|static|protected|abstract|native|synchronized) +([a-zA-Z0-9<>._?, ]+) +([a-zA-Z0-9_]+) *\\([a-zA-Z0-9<>\\[\\]._?, \n]*\\) *([a-zA-Z0-9_ ,\n]*) *\\{";

        Scanner scanner = new Scanner(input);
        scanner.useDelimiter("\\s");
        String token = "";
        while(scanner.hasNext()) {
            token = scanner.nextLine();
            if(Pattern.compile(regex).matcher(token).matches()) {
                System.out.println(token + " : true");
            } else {
                System.out.println(token + " : false");
            }
        }
        scanner.close();
    }

    public void isIfStatement(String input) {
        
        String regex = "if\\s*\\(((?:[^\\(\\)]|\\((?1)\\))*+)\\)\\s*{((?:[^{}]|{(?2)})*+)}";

        Scanner scanner = new Scanner(input);
        scanner.useDelimiter("\\s");
        String token = "";
        while(scanner.hasNext()) {
            token = scanner.nextLine();
            if(Pattern.compile(regex).matcher(token).matches()) {
                System.out.println(token + " : true");
            } else {
                System.out.println(token + " : false");
            }
        }
        scanner.close();
    }

    public void isComment(String input) {
        
        String regex = "/\\*+[^*]*\\*+(?:[^/*][^*]*\\*+)*/";

        Scanner scanner = new Scanner(input);
        scanner.useDelimiter("\\s");
        String token = "";
        while(scanner.hasNext()) {
            token = scanner.nextLine();
            if(Pattern.compile(regex).matcher(token).matches()) {
                System.out.println(token + " : true");
            } else {
                System.out.println(token + " : false");
            }
        }
        scanner.close();
    }

    public static void main(String... args) {

        Solution solution = new Solution();
        
        String input = null;
        
        try {
            input = Files.lines(Paths.get("input.dat"))
                            .collect(Collectors.joining("\n"));
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }

        solution.isIdentifier(input);
        System.out.println("------------");
        solution.isFunction(input);
        System.out.println("------------");
        //solution.isIfStatement(input);
        System.out.println("------------"); 
        solution.isComment(input);
    }
}