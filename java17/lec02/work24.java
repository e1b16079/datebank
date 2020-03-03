import java.awt.*;
import java.applet.*;

public class work24 extends Applet {
    public void paint(Graphics g) {
        int size = 15;

        for (int i = 0; i <= 7; i++) {
            for (int j= 0; j <= i; j++) {
                g.fillOval(120-j*size, 15+i * size, size, size);
            }
        }
    }
}

