import java.awt.*;
import java.applet.*;

public class work15 extends Applet {
    public void paint(Graphics g){

	g.setColor(Color.white);
	g.fillRect(0,0,440,320);
    
	g.setColor(Color.red);
	g.fillRect(0,0,120,120);
        g.fillRect(200,0,240,120);
        g.fillRect(0,200,120,120);
	g.fillRect(200,200,240,120);

	g.setColor(Color.blue);
	g.fillRect(140,0,40,320);
	g.fillRect(0,140,440,40);

    }
}
