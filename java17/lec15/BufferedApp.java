import java.io.*;

public class BufferedApp {
    public static void main(String[] args) 
    throws IOException {
	BufferedReader in  = null;
	PrintWriter    out = null;
	int number = 1;
	String s1;
	
	try {
	    in  = new BufferedReader(
		    new FileReader(args[0]));
	    out = new PrintWriter(
		    new BufferedWriter(new FileWriter(args[1])));
	    
	    while ((s1 = in.readLine()) != null) {
		out.format("%3d: %s%n", number, s1.charAt(s1.length()-1));
		number++;
	    }
	} finally {
	    if (in  != null)  in.close();
	    if (out != null) out.close();
	}
    }
}
