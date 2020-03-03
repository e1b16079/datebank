import java.io.*;

public class SplitApp {
    public static void main(String[] args)
    throws IOException {
	BufferedReader in = null;
	String s1, s2;
	int 	 day;
	double ave, max, min;
	String kaze;
	
	try {
	    in = new BufferedReader(new FileReader(args[0]));
	    
	    while ((s1 = in.readLine()) != null) {
		s2 = s1.trim();
		if (s2.length() != 0) {
		    String[] tokens = s2.split("\\s+");
		    day  = Integer.parseInt(tokens[0]);
		    ave  = Double.parseDouble(tokens[1]);
		    max  = Double.parseDouble(tokens[2]);
		    min  = Double.parseDouble(tokens[3]);
		    kaze = tokens[4];
		    System.out.format("%2d %4.1f %4.1f %4.1f %s %n",
				      day, ave, max, min, kaze);
		}
	    }
	} finally {
	    if (in != null) in.close();
	}
    }
}
