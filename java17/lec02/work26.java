import java.awt.*;
import java.applet.*;

public class work26 extends Applet {
    public void paint(Graphics g) {
        int x, i;

	g.setColor(Color.red);
        for (i = 1; i <= 10; i++) {
            g.fillOval(i*40-10, 20, 20, 20);
        }

	g.setColor(Color.blue);
        for (x = 50; x <= 420; x = x + 40) {
            g.fillOval(x, 40, 20, 20);
        }
    }
}

