import java.nio.file.Paths;
import java.nio.file.Files;
import java.util.regex.*;
import java.util.stream.Collectors;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.File;
import java.util.Hashtable;
import java.util.Scanner;
import java.util.logging.*;

public class LexicalAnalyzer {

    private Hashtable<String, String> hashtable;
    private StringBuilder result;
    private Logger logger = Logger.getLogger(getClass().getSimpleName());

    public LexicalAnalyzer() {
        hashtable = createAndPopulateHashtable();
        result = new StringBuilder();
        logger.setLevel(Level.INFO);
    }

    /**
     * This method will analyze the text file passed as an argument.
     * @param inputFileName : the name of the file that has to be analyzed 
     * @param outputFileName : the name of the file to which the output will be written
     * @throws IOExcpetion : IOExcpetion is thrown as a File is being read
     */
    public void analyseText(String inputFileName, String outputFileName) throws IOException {
        PrintWriter writer = new PrintWriter(new File(outputFileName));
        

        String input = Files.lines(Paths.get(inputFileName))
                            .map((line) -> {
                                return line.replaceAll("[\\t\\s]+", " ");
                            }) 
                            .collect(Collectors.joining());
        logger.info(input);
        Scanner scanner = new Scanner(input);
        scanner.useDelimiter(" ");

        while(scanner.hasNext()) {
            String token = scanner.next();

            switch(token) {
                case "if":
                    result.append("<IF,if>");
                    break;
                case "else":
                    result.append("<ELSE,else>");
                    break;
                case "for":
                    result.append("<FOR,for>");
                    break;
                case "while":
                    result.append("<WHILE,while>");
                    break;
                case "int":
                    result.append("<INT,int>");
                    break;
                case "float":
                    result.append("<FLOAT,float>");
                    break;                    
                case "switch":
                    result.append("<SWITCH,switch>");
                    break;
                case "case":
                    result.append("<CASE,case>");
                    break;
                case "do":
                    result.append("<DO,do>");
                    break;
                case "(":
                    result.append("<LPAREN,(>");
                    break;
                case ")":
                    result.append("<RPAREN,)>");
                    break;
                case ";":
                    result.append("<SEMICLN,;>");
                    break;
                case "==":
                    result.append("<EQ,==>");
                    break;
                case "!=":
                    result.append("<NEQ,!=>");
                    break;
                case "<":
                    result.append("<LT,<");
                    break;
                case "<=":
                    result.append("<LEQ,<=");
                    break;
                case ">":
                    result.append("<GT,>>");
                    break;
                case ">=":
                    result.append("<GEQ,>=>");
                    break;
                case "=":
                    result.append("<ASSIGN,=>");
                    break;
                case "+":
                    result.append("<PLUS,+");
                    break;
                case "-":
                    result.append("<MINUS,->");
                    break;
                case "*":
                    result.append("<TIMES,*");
                    break;
                case "/":
                    result.append("<DIV,/");
                    break;
                default:
                    if(Pattern.matches("([a-zA-Z]|([a-zA-Z]&[0-9]))*", token)) {
                        result.append("<ID,"+token+">");
                    } else if(Pattern.matches("[0-9]+", token)) {
                        result.append("<NUM,"+token+">");
                    } else if(Pattern.matches("[0-9]+(.[0-9]+)?", token)) {
                        result.append("<REAL,"+token+">");
                    } else if(Pattern.matches("([a-zA-Z][0-9])|\\s", token)) {
                        result.append("<STRING,"+token+">");
                    } 
                    break;
            }
        }
        writer.println(result.toString());
        scanner.close();
        writer.close();

    }

    /**
     * A method that initializes a hashtable with necessary values.
     * @return: A filled hashtable is returned.
     */
    private Hashtable<String, String> createAndPopulateHashtable() {
        Hashtable<String, String> hashtable = new Hashtable<>();
        hashtable.put("if","IF");
        hashtable.put("else","ELSE");
        hashtable.put("for","FOR");
        hashtable.put("while","WHILE");
        hashtable.put("int","INT");
        hashtable.put("float","FLOAT");
        hashtable.put("switch","SWITCH");
        hashtable.put("case","CASE");
        hashtable.put("do","DO");
        hashtable.put("(","LPAREN");
        hashtable.put(")","RPAREN");
        hashtable.put(";","SEMICLN");
        hashtable.put("==","EQ");
        hashtable.put("!=","NEQ");
        hashtable.put("<","LT");
        hashtable.put("<=","LEQ");
        hashtable.put(">","GT");
        hashtable.put("id","ID");
        hashtable.put("num","NUM");
        hashtable.put("real","REAL");
        hashtable.put("string","STRING");
        hashtable.put("=","ASSIGN");
        hashtable.put("+","PLUS");
        hashtable.put("-","MINUS");
        hashtable.put("*","TIMES");
        hashtable.put("/","DIV");

        return hashtable;
    }

    public static void main(String[] args) {

        LexicalAnalyzer analyzer = new LexicalAnalyzer();

        try {
            analyzer.analyseText("input.dat", "output.dat");
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }
    }
}