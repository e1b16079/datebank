import java.io.*;

public class FileApp {
    public static void main(String[] args)
    throws IOException {
	FileReader in = null;
	int c;
	
	try {
	    in = new FileReader("input.txt");
	    
	    while ((c = in.read()) != -1) {
		System.out.format("%c", c);
	    } 
	} catch (FileNotFoundException e1) {
   	  System.out.println("input.txtが存在しません" );
	}finally {
	    if (in != null) in.close();
	}
    }
}
