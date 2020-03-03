import java.io.*;
import java.util.Scanner;

public class ScannerCsvApp {
    public static void main(String[] args)
    throws IOException {
	Scanner in = null;
	int     day;
	double  ave, max, min;
	String  kaze;
	
	try {
	    in = new Scanner(new BufferedReader(
						new FileReader(args[0])));
	    in.useDelimiter("\\s*,\\s*|\n");
	    
	    while (in.hasNext()) {
		day = in.nextInt();
		ave = in.nextDouble();
		max = in.nextDouble();
		min = in.nextDouble();
		kaze = in.next();
		System.out.format("%2d %4.1f %4.1f %4.1f %s\n",
				  day, ave, max, min, kaze);
	    }
	} finally {
	    if (in != null) {
		IOException ex = in.ioException();
		in.close();
		if (ex != null) throw ex;
	    }
	}
    }
}
