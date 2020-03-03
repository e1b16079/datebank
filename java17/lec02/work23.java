import java.awt.*;
import java.applet.*;

public class work23 extends Applet {
    public void paint(Graphics g) {
        int x;
  
	g.drawRect(50,20,40,200);

	g.setColor(Color.red);
        for (x = 20; x <= 185; x = x + 40) {
            g.fillOval(50, x, 40, 40);
        }
    }
}

