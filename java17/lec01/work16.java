import java.awt.*;
import java.applet.*;

public class work16 extends Applet {
    public void paint(Graphics g){

	g.setColor(Color.yellow);
	g.fillArc(144,44,96,96,45,300);

	g.setColor(Color.red);
	g.fillArc(110,80,60,60,45,300);

	g.setColor(Color.blue);
	g.fillArc(10,20,120,120,45,300);

	g.setColor(Color.black);
	g.fillOval(70,30,20,20);
	g.fillOval(140,85,10,10);
	g.fillOval(192,52,16,16);
   }
}
