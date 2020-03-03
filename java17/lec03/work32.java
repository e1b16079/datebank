import java.awt.*;
import java.applet.*;

public class work32 extends Applet {
  public void paint(Graphics g) {

	double rndA=Math.random();
	int useA=1*(int)(rndA*3)+0;

	double rndB=Math.random();
	int useB=2*(int)(rndB*5)+10;

	g.drawString("rndA="+rndA,20,40); 
	g.drawString("useA="+useA,20,60);
	g.drawString("rndB="+rndB,20,80);
	g.drawString("useB="+useB,20,100);
  }
}

