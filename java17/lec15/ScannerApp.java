import java.io.*;
import java.util.Scanner;

public class ScannerApp {
    public static void main(String[] args)
    throws IOException {
	Scanner in = null;
	double sum = 0.0;
	int    cnt = 0;
	
	try {
	    in = new Scanner(new BufferedReader(
						new FileReader(args[0])));
	    
	    while (in.hasNext()) {
		if (in.hasNextDouble()) {
		    sum += in.nextDouble();
		    cnt++;
		} else {
		    System.out.println("[" + in.next() + 
				       "]はdouble型データではありません。");
		}
	    }
	} finally {
	    if (in != null) {
		IOException ex = in.ioException();
		in.close();
		if (ex != null) throw ex;
	    }
	}
	
	System.out.format("データ%d個の平均値は%.2fです。%n",
			  cnt, sum / cnt);
    }
}
