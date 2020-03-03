import java.awt.*;
import java.applet.*;

public class work17 extends Applet {
    public void paint(Graphics g){

	g.setColor(Color.yellow);
	g.fillArc(20,80,60,60,45,300);

	g.setColor(Color.red);
	g.fillArc(45,10,60,60,-45,300);

	g.setColor(Color.blue);
	g.fillArc(145,10,60,60,225,300);

	g.setColor(Color.pink);
	g.fillArc(170,80,60,60,135,300);

	g.setColor(Color.black);
	g.fillOval(50,85,10,10);
	g.fillOval(90,40,10,10);
	g.fillOval(165,55,10,10);
	g.fillOval(175,100,10,10);
   }
}
