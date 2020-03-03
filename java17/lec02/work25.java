import java.awt.*;
import java.applet.*;

public class work25 extends Applet {
    public void paint(Graphics g) {
        int size = 25;

        for (int i = 1; i <= 4; i++) {
            for (int j= 1; j <= i; j++) {
		g.setColor (new Color(50*i,30*(i+j),250-50*j));
                g.fillOval(j * size, i * size, size, size);
            }
        }
    }
}

