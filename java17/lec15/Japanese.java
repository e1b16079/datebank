import java.io.*;

public class Japanese {
    public static void main(String[] args) 
    throws IOException {
	BufferedReader in  = null;
	PrintWriter    out = null;
	String s1;
	
	try {
	    in  = new BufferedReader(
		    new InputStreamReader(
			new FileInputStream(args[0]),JISAutoDetect));
	    out = new PrintWriter(
		    new BufferedWriter(
			new OutputStreamWriter(
			    new FileOutputStream(args[1]), 
			    args[2])));
	    
	    while ((s1 = in.readLine()) != null) {
		out.format("%3d: %s%n", s1.length(), s1);
	    }
	} finally {
	    if (in  != null)  in.close();
	    if (out != null) out.close();
	}
    }
}
