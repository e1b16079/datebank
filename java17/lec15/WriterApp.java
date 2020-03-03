import java.io.*;

public class WriterApp {
    public static void main(String[] args) 
    throws IOException {
	FileReader in  = null;
	FileWriter out = null;
	int c;
	
	try {
	    in  = new FileReader("input.txt");
	    out = new FileWriter("output.txt");
	    
	    while ((c = in.read()) != -1) {
		if(c <= 127){
		out.write(c);
	    }else{
	    out.write("●");
	    }}
	} finally {
	    if (in  != null)  in.close();
	    if (out != null) out.close();
	}
    }
}
